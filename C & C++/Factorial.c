#include <stdio.h>

int main()
{
  int bil, hasil = 1, i;
  printf("Masukkan bilangan: ");
  scanf("%d", &bil);
  if (bil >= 1)
  {
    for (i = bil; i >= 1; i--)
    {
      hasil = i * hasil;
      printf("%dx", i);
    }
    printf("\nFaktorial %d adalah %d \n", bil, hasil);
  }
  else if (bil == 0)
  {
    printf("Faktorial %d adalah 1 \n", bil);
  }
  else
  {
    for (i = bil; i <= -1; i++)
    {
      hasil = i * hasil;
      printf("%dx", i);
    }
    printf("\nFaktorial %d adalah %d \n", bil, hasil);
  }
  return 0;
}
