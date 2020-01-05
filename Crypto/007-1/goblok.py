from hashlib import md5
from itertools import product


def main():
    hhh = "0123456789abcdef"
    key = "29053f3d87e0c7ccb3f0b34ce6654b81"
    hasher = md5
    for i in product(hhh, repeat=32):
        msg = (hasher("".join(i)).hexdigest())
        if msg == key:
            print(i)


if __name__ == "__main__":
    main()
