#include <stdio.h>

int main(){
  double a;
  int b;
  while(~scanf(" %lf",&a)){
    b = a*100*1.6+5;
    printf("%d.%d\n",b/100,b%100/10);
  }
}