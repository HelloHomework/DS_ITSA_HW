#include <stdio.h>
int main() {
  int x, i;
  scanf("%d", &x);
  
  for (i = 1; i!=x+1; ++i) {
    printf("%d*%d=%d\n", i,i,i*i);
  }
}