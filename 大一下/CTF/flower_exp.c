#include <stdio.h>
#include <stdint.h>
void tea(uint32_t* intext, uint32_t* key)
{
    uint32_t i,v5,v6;
    uint32_t v7;
    uint32_t* v10;
    v5=*intext;
    v6=*(intext+1);
    uint32_t delta=0x61C88647;
    v7=-delta*32;
    v10 = key;
    for(i=0;i<32;i++)
    {
        v6 -= (v10[3] + (v5 >> 5)) ^ (v7 + v5) ^ (v10[2] + 16 * v5);
        v5 -= (v10[1] + (v6 >> 5)) ^ (v7 + v6) ^ (16 * v6 - 0x5A945433);
        v7+=delta;
    }
    *intext=v5;
    *(intext+1)=v6;
}
int main()
{
    uint32_t v11[6];
    int i;
    v11[0] = 0x326D7035;
    v11[1] = 0xA5237CF;
    v11[2] = 0xBD5B6B26;
    v11[3] = 0x92D036C6;
    v11[4] = 0xA53CEAA9;
    v11[5] = 0x7E23DAD2;
    uint32_t v10[4]={0xA56BABCD,0xFFFF,0xABCDEFFF,0x12345678};
    for(i=0;i<3;i++){
        tea(&v11[i*2],v10);
    }
    for(i=0;i<3;i++)
    {
        printf("%08x %08x ",v11[i*2],v11[i*2+1]);
    }
    return 0;
}

    