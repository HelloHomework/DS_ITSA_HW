#include <stdio.h>

int main(){
  int a,b,c,d;
  while(~scanf("%d",&a)){
    scanf("%d",&b);
    if((a>=0&&a<=100)&&(b>=0&&b<=100))printf("inside\n");
    else printf("outside\n");
  }
}