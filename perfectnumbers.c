#include <stdio.h>
#include <stdlib.h>
int mukemmel(int c){
	int b;
	int toplam=0;
	for(b=1;b<c;b++){
	if(c%b==0){
		toplam=toplam+b;
		if(toplam==c){
		printf("bu sayi mukemmel sayidir.");
	}
	}	
	
	
	}
	return toplam;
	
	
}


int main() {
	int a,c;
	printf("bir sayi giriniz:");
	scanf("%d",&c);
	a=mukemmel(c);
	
	return 0;
}
