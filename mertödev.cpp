#include <stdio.h>

int main(){

  double sayi1 = 0.0, sayi2 = 0.0, sonuc = 0.0;
  char islem = 'x';

  fprintf(stdout, "<sayi1> <islem> <sayi2> : ");
  fscanf(stdin, "%lf %c %lf", &sayi1, &islem, &sayi2);

  switch (islem)
  {
    case '+':
    sonuc = sayi1 + sayi2;
      break;
    case '-':
    sonuc = sayi1 - sayi2;
      break;
    case '*':
    sonuc = sayi1 * sayi2;
      break;
    case '/':
    sonuc = sayi1 / sayi2;
      break;
    default:
    sonuc = 0;
      break;
  }

  fprintf(stdout, "%lf\n", sonuc);

  return 0;
}





