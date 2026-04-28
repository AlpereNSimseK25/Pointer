#include <stdio.h>
int main(){

int a=10;
int *p;
p=&a;

printf("%d \n",*p); // p’nin gösterdiği adresteki içeriği basar

printf("%d \n",p); // p’nin içeriğini basar, aynı zamanda bu a'nın adresidir

printf("%d \n",a); // a’nın değerini basar

printf("%d \n",&a); //a’nın adresini basar

printf("%d \n",&p); //p’nin adresini basar

printf("%d \n",p); //p’nin içeriğini basar
p++;
printf("%d \n",p); //p’nin içeriğini basar (p'nin içeriği 1 int boyutu kadar artmıştır)

printf("--------------------------------------------------------------- \n");

int sayi1 = 25;
int *pt;

pt = &sayi1;
printf("%p \n",pt);
printf("%p \n",pt);
printf("%d \n",*pt);

printf("------------------------------------------------- \n");

int plaka = 25;
int *ptr; // pointer tanımı yapıldı
ptr = &plaka; //pointer plakanın adresini tutuyor

printf("%p \n", ptr);
printf("%p \n", &plaka);
printf("%p \n", &ptr);
printf("%d \n", *ptr);  


/*
int fiyat = 12500;

int *ptr = fiyat;
printf("%p \n", ptr);
printf("%p \n", &ptr);
//printf("%p \n", *ptr);

*/

}
