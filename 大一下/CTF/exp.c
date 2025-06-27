/*#include <stdio.h>
#include <string.h>
#include<Windows.h>
#include <stdint.h>

void enc(uint64_t* a1, char* a3)
{
  unsigned __int8 v3; // bl
  char v5; // si
  __int64 v6; // r11
  int n256; // r10d
  unsigned __int64 v8; // r9
  int n256_1; // r8d
  __int64 v10; // r9
  char v11; // dl
  char v12; // cl
  char v13; // cl
  __int64 n4; // r10
  char v16; // cl
  char v17; // r8
  char v18; // cl
  __int64 v19; // r8
  char v20; // cl
  __int64 v21; // r8
  char v22; // cl
  __int64 v23; // r8
  char v24; // cl
  __int64 v25; // r8
  char v26; // cl
  __int64 v27; // r8
  char v28; // cl
  __int64 v29; // r8
  char v30; // dl
  __int64 result; // rax
  char v32[512]; // [rsp+0h] [rbp-100h]

  v3 = 0;
  v5 = 0;
  v6 = 0;
  n256 = 0;
  v8 = 0LL;
  do
  {
    v32[v8 + 256] = n256++;
    v32[v8] = *(char *)(v8 % 9 + a3);
    ++v8;
  }
  while ( n256 < 256 );
  n256_1 = 0;
  v10 = 0LL;
  do
  {
    v11 = v32[v10 + 256];
    v12 = v32[v10++];
    v13 = v11 + n256_1++ + v12;
    v6 = (unsigned __int8)(v6 + v13);
    v32[v10 + 255] = v32[v6 + 256] + v11;
    v32[v6 + 256] += v11;
  }
  while ( n256_1 < 256 );
  unsigned char* v14 = (unsigned char *)a1;
  n4 = 4LL;
  do
  {
    v16 = v32[(unsigned __int8)(v3 + 1) + 256];
    v17 = v5 + v16;
    v32[(unsigned __int8)(v3 + 1) + 256] = v32[(unsigned __int8)(v5 + v16) + 256];
    v32[(unsigned __int8)(v5 + v16) + 256] = v16;
    v14[0] -= v32[(unsigned __int8)(v32[(unsigned __int8)(v3 + 1) + 256] + v16) + 256];
    v18 = v32[(unsigned __int8)(v3 + 2) + 256];
    v19 = (unsigned __int8)(v17 + v18);
    v32[(unsigned __int8)(v3 + 2) + 256] = v32[v19 + 256];
    v32[v19 + 256] = v18;
    v14[1] -= v32[(unsigned __int8)(v32[(unsigned __int8)(v3 + 2) + 256] + v18) + 256];
    v20 = v32[(unsigned __int8)(v3 + 3) + 256];
    v21 = (unsigned __int8)(v19 + v20);
    v32[(unsigned __int8)(v3 + 3) + 256] = v32[v21 + 256];
    v32[v21 + 256] = v20;
    v14[2] -= v32[(unsigned __int8)(v32[(unsigned __int8)(v3 + 3) + 256] + v20) + 256];
    v22 = v32[(unsigned __int8)(v3 + 4) + 256];
    v23 = (unsigned __int8)(v21 + v22);
    v32[(unsigned __int8)(v3 + 4) + 256] = v32[v23 + 256];
    v32[v23 + 256] = v22;
    v14[3] -= v32[(unsigned __int8)(v32[(unsigned __int8)(v3 + 4) + 256] + v22) + 256];
    v24 = v32[(unsigned __int8)(v3 + 5) + 256];
    v25 = (unsigned __int8)(v23 + v24);
    v32[(unsigned __int8)(v3 + 5) + 256] = v32[v25 + 256];
    v32[v25 + 256] = v24;
    v14[4] -= v32[(unsigned __int8)(v32[(unsigned __int8)(v3 + 5) + 256] + v24) + 256];
    v26 = v32[(unsigned __int8)(v3 + 6) + 256];
    v27 = (unsigned __int8)(v25 + v26);
    v32[(unsigned __int8)(v3 + 6) + 256] = v32[v27 + 256];
    v32[v27 + 256] = v26;
    v14[5] -= v32[(unsigned __int8)(v32[(unsigned __int8)(v3 + 6) + 256] + v26) + 256];
    v28 = v32[(unsigned __int8)(v3 + 7) + 256];
    v29 = (unsigned __int8)(v27 + v28);
    v32[(unsigned __int8)(v3 + 7) + 256] = v32[v29 + 256];
    v32[v29 + 256] = v28;
    v14[6] -= v32[(unsigned __int8)(v32[(unsigned __int8)(v3 + 7) + 256] + v28) + 256];
    v3 += 8;
    v30 = v32[v3 + 256];
    v5 = v29 + v30;
    v32[v3 + 256] = v32[(unsigned __int8)(v29 + v30) + 256];
    v32[(unsigned __int8)(v29 + v30) + 256] = v30;
    result = (unsigned __int8)(v30 + v32[v3 + 256]);
    v14[7] -= v32[result + 256];
    --n4;
  }
  while ( n4 );
}
int main()
{
    char v2[]="wednesday";
    uint64_t v1[4]={0xAB03BC1E6670D45C,0x12BA31F09A17F993,0xD01AEEA6B2A0129B,0x19D43E4C73709FA0};
    for(int i=0;i<4;i++){
      enc(&v1[i],v2);
      printf("%016llx ",v1[i]);
    }
}*/
#include <stdio.h>
#include <string.h>
#include <stdint.h>

void enc(uint64_t *a1, char* a3) {
    unsigned char v3; // bl
    static char v5; // si
    uint64_t v6; // r11
    int n256; // r10d
    unsigned int v8; // r9
    int n256_1; // r8d
    unsigned int v10; // r9
    char v11; // dl
    char v12; // cl
    char v13; // cl
    static char v16; // cl
    static char v17; // r8
    char v32[512]; // [rsp+0h] [rbp-100h]

    v3 = 0;
    v5 = 0;
    v6 = 0;
    n256 = 0;
    v8 = 0;
    do {
        v32[v8 + 256] = n256++;
        v32[v8] = a3[v8 % 9];
        ++v8;
    } while (n256 < 256);
    
    n256_1 = 0;
    v10 = 0;
    do {
        v11 = v32[v10 + 256];
        v12 = v32[v10++];
        v13 = v11 + n256_1++ + v12;
        v6 = (unsigned char)(v6 + v13);
        v32[v10 + 255] = v32[v6 + 256] + v11;
        v32[v6 + 256] = v32[v6 + 256] + v11;
    } while (n256_1 < 256);

    uint64_t v1[4] = {
        0xAB03BC1E6670D45C,
        0x12BA31F09A17F993,
        0xD01AEEA6B2A0129B,
        0x19D43E4C73709FA0
    };

    // Process each byte of the 64-bit input
    for (int i = 0; i < 4; i++) {
      unsigned char *data = (unsigned char *)&v1[i];
      for (int i = 0; i < 8; i++) {
          v16 = v32[(unsigned char)(v3 + 1) + 256];
          v17 = v5 + v16;
          v32[(unsigned char)(v3 + 1) + 256] = v32[(unsigned char)(v5 + v16) + 256];
          v32[(unsigned char)(v5 + v16) + 256] = v16;
          data[i] -= v32[(unsigned char)(v32[(unsigned char)(v3 + 1) + 256] + v16) + 256];
          
          v3++;
          v5 = v17;
      }
      printf("%016llx ", v1[i]);
    }
}

int main() {
    char v2[] = "wednesday";
    uint64_t v1[4] = {
        0xAB03BC1E6670D45C,
        0x12BA31F09A17F993,
        0xD01AEEA6B2A0129B,
        0x19D43E4C73709FA0
    };
    
    for (int i = 0; i < 4; i++) {
        enc(&v1[i], v2);
        //printf("%016llx ", v1[i]);
    }
    printf("\n");
    
    return 0;
}