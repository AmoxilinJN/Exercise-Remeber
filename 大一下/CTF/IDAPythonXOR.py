import ida_bytes

#定义地址范围
start = 0x00401000
end = 0x00402000

#读取原始数据
data = ida_bytes.get_bytes(start, end-start+1)

#异或处理
xor_data = bytes(b ^ 0x42 for b in data)

#写入修改后的数据
ida_bytes.patch_bytes(start, xor_data)

print("Done!")