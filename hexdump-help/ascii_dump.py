
bb = []

for i in range(256):
    bb.append(i)

with open("allbytes.bin", "wb") as f:
    f.write(bytes(bb))
