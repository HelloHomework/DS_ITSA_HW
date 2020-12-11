#include <stdio.h>

int main(){
  int a,b,c,d;
  while(~scanf("%d",&a)){
    scanf("%d",&b);
    if(a*a+b*b<=10000)printf("inside\n");
    else printf("outside\n");
  }
}