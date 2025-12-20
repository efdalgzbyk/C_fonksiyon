#include<stdlib.h>
#include<stdio.h>


int uzunluk(char str[]){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}



void main(){
	char kelime[20];
	printf("Lutfen bir kelime giriniz.");
	scanf("%s",kelime);
	
	printf("Uzunluk = %d",uzunluk(kelime));
	
	
}
