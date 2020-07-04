#include <stdio.h>

int main(void)
{
  int a, b;
  char str[11];

  scanf("%d %d", &a, &b);
  scanf("%s", str);
  printf("%d %s\n", a + b, str);
  return 0;
}
