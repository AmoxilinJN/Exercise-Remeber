#include<stdio.h>
#include<ctype.h>

int main(){
    int i;
    char a[30]="qsxfwi{brx_iRxqg_ph_0.r0.r0.r}";
    int a2=-3;
    for ( i = 0; i<30; ++i )
    {
    if ( isalpha(a[i]) )
    {
      if ( isupper(a[i]) )
      {
        a[i] = (a[i] - 65 + a2) % 26 + 65;
        if ( a[i] <= 64 )
          a[i] += 26;
      }
      else
      {
        a[i] = (a[i] - 97 + a2) % 26 + 97;
        if ( a[i] <= 96 )
          a[i] += 26;
      }
    }
    printf("%c",a[i]);
    }
}