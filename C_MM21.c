#include <stdio.h>

int main() {
  long long i, x, s, c;
  while (~scanf("%lld", &i)){
    x = 1;
    while(i>0){
      x*=i;
      --i;
    }
    printf("%lld\n",x);
  }
}