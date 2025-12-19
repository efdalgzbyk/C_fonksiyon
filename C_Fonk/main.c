#include<stdio.h>
#include<stdlib.h>

int toplam(int a,int b){
	return a + b;
}


void main(){
	
	int sayi1,sayi2;
	
	printf("Lutfen iki sayi giriniz.");
	scanf("%d%d",&sayi1,&sayi2);
	
	printf("Toplam = %d",toplam(sayi1,sayi2));
	
}
