
#include <stdio.h> // Standart giris ve �ikislar
#include <locale.h> // T�rk�e karakterler
#include <windows.h> // Arkaplan ve yazi rengi
#include <conio.h>
int main(){
setlocale(LC_ALL,"turkish"); // T�rk�e karakterleri ekliyoruz.
system("color f9"); // Arkaplan ve yazi rengi
int i,T1=0,T2=0,T3=0,n;
printf("Ka�a kadar toplam hesaplansin: ");
scanf("%d",&n);
// Girilen sayiya kadar olan sayilar�n toplami
for(i=1;i<=n;i++){
T1=T1+i;
}
printf("\n");
printf("Araliktaki sayilar�n toplami: %d\n",T1);
// Tek ve �ift sayilarin toplami
for(i=1;i<=n;i++){
if(i%2==0){
T3=T3+i;
} else{
T2=T2+i;
}
}
printf("Araliktaki tek sayilar�n toplami: %d\n",T2);
printf("Araliktaki �ift say�lar�n toplam�: %d\n",T3);
getch();
return 0;
}
	

