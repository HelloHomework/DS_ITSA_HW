#include <stdio.h>

int main() {
  int i, x, s, c;
  while (~scanf("%d", &i)) {
    x = i;
    c = 0;
    while (x != 0) {
      c += (x % 10) * (x % 10) * (x % 10);
      x /= 10;
    }
    if (c == i)
      printf("Yes\n");
    else
      printf("No\n");
  }
}