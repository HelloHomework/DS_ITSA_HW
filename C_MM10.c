#include <stdio.h>

int main(){
  double a;
  while(~scanf(" %lf",&a)){
    a = 9.0/5*a+32;
    printf("%.1f\n",a);
  }
}