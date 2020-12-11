#include <stdio.h>

int main(){
  int a,b,c,d;
  while(~scanf(" %d",&a)){
    scanf(" %d %d %d",&b,&c,&d);
    a = 60*(c-a) + (d-b);
    a-=a%30;
    a/=30;
    c = a*30;
    if(a>4)c+=(a-4)*10;
    if(a>16)c+=(a-8)*20;
    printf("%d\n",c);
  }
}