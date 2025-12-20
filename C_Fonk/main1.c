#include<stdlib.h>
#include<stdio.h>

int tekcift(int a){
	
	if(a%2==0){
		printf("Sayi cift bir sayidir");
	}else{
		printf("Sayi tek bir sayidir.");
	}
	
	return a;
}






void main(){
	
	int s;
	printf("Lutfen bir sayi girinzi.");
	scanf("%d",&s);
	
	tekcift(s);
	
}
