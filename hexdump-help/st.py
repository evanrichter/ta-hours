from struct import pack

# reference to struct:
# https://docs.python.org/3/library/struct.html

contents = b""

contents += pack("iii", 1337, 34, -1)

print(contents)

with open("evil_giftcard.gft", "wb") as f:
    f.write(contents)
