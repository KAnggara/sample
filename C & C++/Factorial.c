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
    printf("\nFaktorial %d adalah %d ", bil, hasil);
  }
  else if (bil == 0)
  {
    printf("Faktorial %d adalah 1 ", bil);
  }
  else
  {
    printf("\n%d adalah bilangan Negatif", bil);
    printf("\n%d Faktorial Tidak Terdefenisi", bil);
  }
  printf("\n");
  return 0;
}
