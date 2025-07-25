target = [
    0x4B, 0x47, 0x63, 0x46, 0x43, 0x70, 0x4E, 0x47, 0x59, 0x52, 
    0x52, 0x64, 0x7A, 0x7E, 0x45, 0x7A, 0x55, 0x57, 0x46, 0x7C, 0x6B
]

index_map = [
    0, 5, 0xD, 6, 3, 2, 0xB, 9, 0x11, 0xA,
    8, 0x13, 0xE, 0x12, 0x10, 0x14, 4, 1, 7, 0xC, 0xF
]

flag = [0] * 21
result = [0] * 21

for i in range(21):
    pos = index_map[i]
    if i % 3 == 0:
        flag[pos] = target[i] ^ 0x25
    elif i % 3 == 1:
        flag[pos] = target[i] ^ 0x37
    else:
        flag[pos] = target[i] ^ 0x16
    result[i] = flag[pos]

print(''.join(chr(c) for c in result))