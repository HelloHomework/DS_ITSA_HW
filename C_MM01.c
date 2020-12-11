#include <stdio.h>

int main(){
  double a,b,c;
  while(~scanf(" %lf",&a)){
    scanf(" %lf %lf",&b,&c);
    printf("Trapezoid area:%.1lf\n",(a+b)*c/2);
  }
}