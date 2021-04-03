
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int islem,miktar,bakiye=1000;
char yeniden='e';
printf("1-Bakiye sorgulaman2-Para cekmen3-Para yatirman");
{
printf("Lutfen isleminizi giriniz: ");
scanf("%d",&islem);
switch(islem){
case 1:
printf("Bakiyeniz %d tl'dir.",bakiye);
break;
case 2:
printf("Miktar giriniz: ");
scanf("%d",&miktar);
bakiye-=miktar;
printf("Bakiyeniz %d tl'dir.",bakiye);
break;
case 3:
printf("Miktar giriniz: ");
scanf("%d",&miktar);
bakiye+=miktar;
printf("Bakiyeniz %d tl'dir.",bakiye);
break;
default:
printf("Gecersiz bir islem girdiniz!");
break;
}
}
}
