#include <stdio.h>

int main(void)
{
  int i, ans = 0;
  char num[101];

  scanf("%s", num);
  for (i = 0; num[i + 1] != '\0'; i++) {
      if (num[i] == '0') ans--;
  }
  ans += i;
  printf("%d\n", ans);
  return 0;
}
