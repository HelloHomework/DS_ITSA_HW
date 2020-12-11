#include <stdio.h>

int main(){
  double a,b;
  while(~scanf(" %lf",&a)){
    scanf(" %lf",&b);
    printf("%.1lf\n",a*b/2);
  }
}