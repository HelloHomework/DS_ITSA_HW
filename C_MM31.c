#include <stdio.h>

int main() {
  int a, b, c, d;
  while (~scanf("%d", &a)) {
    c = 0;
   for(int i = 1;i<=a;++i)
    if((i%6==0)&&(i%12!=0))
      c+=i;
    printf("%d\n",c);
  }
}