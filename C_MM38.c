#include <stdio.h>

int main(){
  int a,b,c;
  while (~scanf("%d",&a)){
    scanf("%d %d",&b,&c);
    if((a+b>c)&&(a+c>b)&&(c+b>a))printf("fit\n");
    else printf("unfit\n");
  }
  
}