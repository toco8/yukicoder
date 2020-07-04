#include <stdio.h>

int main(void)
{
  int i, num;

  scanf("%d", &num);
  puts("1");
  for (i = 2; i <= num; i++) {
    if (i % 15 == 0) puts("FizzBuzz");
    else if (i % 3 == 0) puts("Fizz");
    else if (i % 5 == 0) puts("Buzz");
    else printf("%d\n", i);
  }
  return 0;
}
