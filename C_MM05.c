#include <stdio.h>
#include <math.h>

int main(){
  double a;
  while(~scanf(" %lf",&a)){

    printf("%.1lf\n",floor(a*a*100+5)/100);
  }
}