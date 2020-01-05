#! /usr/bin/python3

key = [
    64,
    32,
    48,
]


parts = [
    "\x01\x32\x2b\x21\x36\x76\x3b",
    "\x95\x97\x75\x7f\x85\x54\x9a\x99\x7f\x63\x92",
    "\x04\x33\x3B\x2F\x3D\x03\x2F\x45\x47\x25\x4d"
]

flag = ""

for c in parts[0]:
    flag += chr(ord(c) ^ key[0])

for c in parts[1]:
    flag += chr(ord(c) - key[1])

for c in parts[2]:
    flag += chr(ord(c) + key[2])

print(flag)
