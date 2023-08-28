#include <stdio.h>

int main(){
	int bil, i;
	
	printf("Masukkan bilangan : ");
	scanf("%d", &bil);
	
	for(i = 1; i <= bil; i++){
		if(i%2 == 0 || i%3 == 0){
			continue;
		}
		
		printf("%d ", i);
	}
}
/*
2. Dengan menggunakan pernyataan continue, buatlah program yang dapat 
menampilkan bilangan ganjil dari 1 sampai < n (n diinputkan), kecuali bilangan 
ganjil tersebut kelipatan 3. 
*/
