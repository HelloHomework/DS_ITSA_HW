#include <stdio.h>
#include <string.h>

int main(){
    int a;
    char b[9] = {0};
   while(~scanf("%d",&a)){
     for(int i = 7;i!=-1;--i,a>>=1)b[i] = (unsigned int)a%2 + '0';
     printf("%s\n",b);
   }
}