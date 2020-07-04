#include <stdio.h>

int main(void)
{
  int N;
  unsigned long int k, sum = 0;

  scanf("%d", &N);
  do {
    scanf("%lu", &k);
    sum += k;
    N--;
  } while (N > 0);
  printf("%lu\n", sum);
  return 0;
}
