#include <stdio.h>

int main(){
  int a,b,c,d;
  while(~scanf("%d",&a)){
    scanf("%d",&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d-%d=%d\n",a,b,a-b);
    c = a/b;d=a%b;
    if(d<0)
      if(b>0)d+=b,--c;
      else d-=b,++c;
    printf("%d/%d=%d...%d\n",a,b,c,d);
  }
}