#include <stdio.h>

int main(void)
{
  int i, num, ans = 0;

  scanf("%d", &num);
  for (i = 1; i <= num; i++)
    ans += i;
  printf("%d\n", ans);
  return 0;
}
