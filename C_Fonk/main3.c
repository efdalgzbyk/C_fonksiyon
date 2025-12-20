#include<stdlib.h>
#include<stdio.h>

int faktoriyelBul(int x){
	int faktoriyel=1,i;
	int toplam =0;
	
	for(i=1;i<=x;i++){
		faktoriyel *=i;
	}
	
	printf("faktoriyel toplami = %d",faktoriyel);
}




void main(){
	
	int a;
	printf("Lutfen faktoriyelini almak istediginiz sayiyi giriniz.");
	scanf("%d",&a);
	
	faktoriyelBul(a);
	
	
}
