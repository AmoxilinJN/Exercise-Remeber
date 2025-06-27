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
        v6 -= (((16 * v5) ^ (v5 >> 5)) + v5) ^ (v7 + v10[((v7 >> 11) & 3LL)]);
        v7+=delta;
        v5 -= (((16 * v6) ^ (v6 >> 5)) + v6) ^ (v7 + v10[v7 & 3]);
    }
    *intext=v5;
    *(intext+1)=v6;
}
int main()
{
    uint32_t v11[2];
    int i;
    v11[0] = 0xE9364656LL;
    v11[1] = 0xA65B3B33LL;
    uint32_t v10[4]={0xA56BABCD,0x12345678,0xABCDEF12,0x87654321};
    tea(v11,v10);
    for(i=0;i<2;i++)
    {
        printf("%08x ",v11[i]);
    }
    return 0;
}

    