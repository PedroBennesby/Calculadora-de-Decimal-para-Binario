#include<stdio.h>
int main()
{
  int dec, temp, i, j = 1, bin = 0;
  printf("\nDigite um numero para converter em binario: ");
  scanf("%d", &dec);
  temp = dec;
  while(temp!=0)
  {
    i = temp % 2;
    bin = bin + (i * j);
    temp = temp / 2;
    j = j * 10;
  }
  printf("\nO numero %d convertido em binario fica: %d\n", dec, bin);
}