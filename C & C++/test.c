#include <stdio.h>

int main()
{
  int bil, hasil = 1, i;
  printf("Masukkan bilangan: ");
  scanf("%d", &bil);
  if (bil >= 1)
  {
    for (i = 1; i <= bil; i++)
    {
      hasil = i * hasil;
    }
    printf("Faktorial %d adalah %d \n", bil, hasil);
  }
  else if (bil == 0)
  {
    printf("Faktorial %d adalah 1 \n", bil);
  }
  else
  {
    printf("%d Lebih dari 1 \n", bil);
    for (i = 1; i <= bil; i++)
    {
      hasil = i * hasil;
    }
    printf("Faktorial %d adalah %d \n", bil, hasil);
  }
  return 0;
}