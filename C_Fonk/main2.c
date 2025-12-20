#include<stdlib.h>
#include<stdio.h>

float ortalama(int dizi[],int n){
	
	int i,toplam=0;
	for(i=0;i<n;i++){
		toplam +=dizi[i];
	}
	return (float) toplam/n;
	
	
}





void main(){
	
	int d[5]={10, 20, 30, 40, 50};
	printf("dizinin ortalmasý = %.2f",ortalama(d,5));
	
	
	
}
