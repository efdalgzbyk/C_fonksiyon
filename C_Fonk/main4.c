#include<stdlib.h>
#include<stdio.h>

#define Pi 3.14

void main(){
	int n;
	float toplam;
	printf("LUtfen bir sayi giriniz.");
	scanf("%d",&n);
	
	toplam = n*Pi;

	printf("Pi ile carpim sonucu = %d",toplam);
}
