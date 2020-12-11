#include <stdio.h>
const int ans[16] = {
    6, 28, 496, 8128, 33550336,
};
int main() {
  int x, i;
  scanf("%d", &x);
  if (x < ans[0]) return 0;
  for (i = 0; x > ans[i + 1]; ++i) {
    printf("%d ", ans[i]);
  }
  printf("%d\n", ans[i]);
}