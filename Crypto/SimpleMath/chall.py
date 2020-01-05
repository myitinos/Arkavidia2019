from Crypto.Util.number import *
from secret import flag
import random, sys

class Unbuffered(object):
    def __init__(self, stream):
        self.stream = stream
    def write(self, data):
        self.stream.write(data)
        self.stream.flush()
    def writelines(self, datas):
        self.stream.writelines(datas)
        self.stream.flush()
    def __getattr__(self, attr):
        return getattr(self.stream, attr)

sys.stdout = Unbuffered(sys.stdout)

def generate():
    secret = hex(random.getrandbits(128))[2:-1]
    m = bytes_to_long(secret)

    p = getPrime(1024)
    q = getPrime(1024)
    r = getPrime(1024)
    s = getPrime(1024)
    n = p*q
    e = 65537
    c = pow(m, e, n)
    eq1 = pow(4*p+6*q, 1357, n)
    eq2 = pow(2*p+q-1234, q, r*s*((p*q)**3))
    return r, s, n, e, c, eq1, eq2, secret

r, s, n, e, c, eq1, eq2, secret = generate()
print "r:", r
print "s:", s
print "n:", n
print "e:", e
print "eq1:", eq1
print "eq2:", eq2
print "c:", c
inp = raw_input("What is the secret?: ")
if (inp == secret):
    print "Congrats!!, Here is your flag:", flag
else:
    choice = random.getrandbits(128) % 2
    if (choice == 1):
        print "RsaCTFTool-kiddie is not allowed :)..."
    else:
        print "I hate you RsaCTFTool-kiddie Player..."
