#include <stdio.h>
#include <string.h>

void rc4_init(unsigned char* s, unsigned char* key, unsigned long Len_k) {
    // 初始化函数
    for (int i = 0; i < 256; i++) {
        s[i] = i;
    }
    unsigned char k[256];
    for (int i = 0; i < 256; i++) {
        k[i] = key[i % Len_k];
    }
    int j = 0;
    unsigned char tmp;
    for (int i = 0; i < 256; i++) {
        j = (j + s[i] + k[i]) % 256;
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}

void rc4_crypt(unsigned char* Data, unsigned long Len_D, unsigned char* key, unsigned long Len_k) {
    // 加解密函数
    unsigned char s[256];
    rc4_init(s, key, Len_k);
    int i = 0, j = 0;
    for (unsigned long k = 0; k < Len_D; k++) {
        i = (i + 1) % 256;
        j = (j + s[i]) % 256;
        unsigned char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        Data[k] ^= s[(s[i] + s[j]) % 256];
    }
}

int main() {
    // 主函数
    unsigned char key[] = "[Warnning]Access_Unauthorized";
    unsigned long key_len = sizeof(key) - 1;

    // 数据数组
    unsigned char data[] = { 0xC3,0x82,0xA3,0x25,0xF6,0x4C, 0x36,0x3B,0x59,0xCC,0xC4,0xE9,0xF1,0xB5,0x32,0x18,0xB1, 0x96,0xAe,0xBF,0x08,0x35 };
    unsigned long data_len = sizeof(data) / sizeof(data[0]);

    // 错误处理：检查输入数据长度是否为零
    if (data_len == 0) {
        fprintf(stderr, "Error: Data length is zero.\n");
        return 1;
    }

    // 使用 RC4 加解密
    rc4_crypt(data, data_len, key, key_len);

    // 输出解密后的数据
    for (unsigned long i = 0; i < data_len; i++) {
        printf("%c", data[i]);
    }
    printf("\n");

    return 0;
}
