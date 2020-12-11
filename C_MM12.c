#include <stdio.h>

int main(){
  int a,b,c,d;
  while(~scanf("%d",&a))
    printf("%d\n",a*1000/238 + ((a*1000/238%238==0)?0:1));
}