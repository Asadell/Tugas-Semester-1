#include <stdio.h>

int main(){
	int tahun;
	
	printf("\nMasukkan tahun : ");
	scanf("%d", &tahun);
	
	if(tahun % 400 ==0){
		puts("\nTahun kabisat");
	}else if(tahun % 100 ==0){
		puts("\nBukan kabisat");
	}else if(tahun % 4 ==0){
		puts("\nTahun kabisat");
	}else{
		puts("\nBukan kabisat");	
	}
	
}
