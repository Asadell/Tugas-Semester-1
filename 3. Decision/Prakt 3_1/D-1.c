#include <stdio.h>

int main(){
	int bilangan1;
	
	scanf("%d", &bilangan1);
	
	printf("Bilangan yang diinputkan adalah %d.\n", bilangan1);
	
	if(bilangan1%2 == 0){
		printf("%d adalah bilangan genap.\n", bilangan1);
		return 0;
	}
	
	printf("%d adalah bilangan ganjil.\n", bilangan1);
}
/*
1. Buat program untuk menginputkan sebuah bilangan, kemudian cetak ke layar bilangan 
tersebut dan beri komentar apakah bilangan tersebut ganjil atau genap. 
Contoh input = 15 
 Output = Bilangan yang diinputkan adalah 15. 
 15 adalah bilangan ganjil.
*/
