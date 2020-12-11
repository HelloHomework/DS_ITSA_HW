#include <stdio.h>

int main() {
  int a, b, c, d,i;
  while (~scanf("%d", &a)) {
   for(i = 35;i+35<=a;i+=35)printf("%d ",i);
    if(a>=35)printf("%d\n",i);
  }
}