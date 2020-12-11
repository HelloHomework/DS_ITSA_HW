#include <stdio.h>

int main() {
  int a, b, c, d;
  while (~scanf("%d", &a)) {
    scanf("%d", &b);
    printf("%d\n", (a + b) * ((a - b > 0) ? (a - b + 1) : (b - a + 1)) / 2);
  }
}