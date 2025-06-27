
import numpy as np

# 实部和虚部目标值
real_part = [
    2019.0, 136.471471, -8.025564, -102.391288, 33.455527,
    184.705093, 29.993235, 82.585939, -75.967191, 1.628784,
    -125.456008, -89.0, -125.456008, 1.628784, -75.967191,
    82.585939, 29.993235, 184.705093, 33.455527, -102.391288,
    -8.025564, 136.471471
]

imag_part = [
    0.0, -101.41171, 4.840999, -32.945493,
    1.087249, -60.419834, -24.546772, 153.04199,
    54.22367, 2.890049, 162.250215, -0.0,
    -162.250215, -2.890049, -54.22367, -153.04199,
    24.546772, 60.419834, -1.087249, 32.945493,
    -4.840999, 101.41171
]

# 构造复数频谱
spectrum = np.array(real_part) + 1j * np.array(imag_part)

# 计算 IDFT
input_signal = np.fft.ifft(spectrum)

# 取实部（输入应为实数信号）
input_real = input_signal.real
print(input_real)
'''
import struct

hex_values = [
    0x0, 0xC0595A5974E65BEA, 0x40135D2ED783DFF4, 0xC0407905EA24CC68,
    0x3FF1655F3519BD40, 0xC04E35BD1ED9DFDB, 0xC0388BF93FF25E57, 0x40632157FB69984A,
    0x404B1CA137F38C54, 0x40071ED20296B335, 0x40644801C2E33EFF, 0x8000000000000000,
    0xC0644801C2E33EFF, 0xC0071ED20296B335, 0xC04B1CA137F38C54, 0xC0632157FB69984A,
    0x40388BF93FF25E57, 0x404E35BD1ED9DFDB, 0xBFF1655F3519BD40, 0x40407905EA24CC68,
    0xC0135D2ED783DFF4, 0x40595A5974E65BEA
]

for hex_val in hex_values:
    double_val = struct.unpack('!d', struct.pack('!Q', hex_val))[0]
    print(double_val)
'''