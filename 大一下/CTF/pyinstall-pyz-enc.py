#!/usr/bin/env python3
import tinyaes
import zlib
 
CRYPT_BLOCK_SIZE = 16
 
# 从crypt_key.pyc获取key，也可自行反编译获取
key = bytes('yibaibayibei1801', 'utf-8')
 
inf = open('mypy.pyc.encrypted', 'rb') # 打开加密文件
outf = open('mypy.pyc', 'wb') # 输出文件
 
# 按加密块大小进行读取
iv = inf.read(CRYPT_BLOCK_SIZE)
 
cipher = tinyaes.AES(key, iv)
 
# 解密
plaintext = zlib.decompress(cipher.CTR_xcrypt_buffer(inf.read()))
 
# 补pyc头(最后自己补也行)
outf.write(b'\x55\x0d\x0d\x0a\0\0\0\0\0\0\0\0\0\0\0\0')
 
# 写入解密数据
outf.write(plaintext)
 
inf.close()
outf.close()