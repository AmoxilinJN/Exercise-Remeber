def str_to_int(strin):
    intout = [ord(char) for char in strin]
    return intout

def int_to_str(strin):
    intout = [chr(char) for char in strin]
    return intout

code = "Iodl>Qnb(ocy"
code += "\x7f"
code += "y.i"
code += "\x7f"
code += "d`3w}wek9{iy=~yL@EC"
buf = []
l = len(code)
code_int = str_to_int(code)
for i in range(l):
    buf.append(code_int[i] ^ i)
print(int_to_str(buf))