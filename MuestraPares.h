#include <stdio.h>

void numRecursive(int n)
{
  if (n == 0) return;
  numRecursive(n - 1);
  printf("       %d ,", n * 2);
}
