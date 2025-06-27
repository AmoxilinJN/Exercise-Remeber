#include<stdio.h>
#include<stdint.h>
#include<string.h>

int main(){
    int i;
    char a[32] = {0x77,0x69,0x6C,0x7A,0x6D,0x7F,0x62,0x6E};
    memcpy(&a[8], "|uzvt|FmvFk|o|kj|Fnvku}d", 24);
    for ( i = 0; i <= 31; ++i )
    {
        a[i] ^= 0x19u;
    }
    printf("%s",a);
}