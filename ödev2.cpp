
#include <stdio.h> // Standart giris ve çikislar
#include <locale.h> // Türkçe karakterler
#include <windows.h> // Arkaplan ve yazi rengi
#include <conio.h>
int main(){
setlocale(LC_ALL,"turkish"); // Türkçe karakterleri ekliyoruz.
system("color f9"); // Arkaplan ve yazi rengi
int i,T1=0,T2=0,T3=0,n;
printf("Kaça kadar toplam hesaplansin: ");
scanf("%d",&n);
// Girilen sayiya kadar olan sayilarýn toplami
for(i=1;i<=n;i++){
T1=T1+i;
}
printf("\n");
printf("Araliktaki sayilarýn toplami: %d\n",T1);
// Tek ve çift sayilarin toplami
for(i=1;i<=n;i++){
if(i%2==0){
T3=T3+i;
} else{
T2=T2+i;
}
}
printf("Araliktaki tek sayilarýn toplami: %d\n",T2);
printf("Araliktaki çift sayýlarýn toplamý: %d\n",T3);
getch();
return 0;
}
	

