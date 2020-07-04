#include <stdio.h>
#include <math.h>

int main(void)
{
  double a, b;

  scanf("%lf %lf", &a, &b);
  printf("%.0lf\n", ceil(b / a));
  return 0;
}
