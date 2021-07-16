#include <stdio.h>

int main()
{
  int i = 1, odd = 1;
  while (i <= 100)
  {
    if (odd % 2 == 1)
    {
      printf("%d \n", odd);
    }
    odd = odd + 2;
    i++;
  }
  printf("\n");
  return 0;
}
