#include <stdio.h>

int main(){
	int n, i;
	
	printf("Masukkan bilangan : ");
	scanf("%d", &n);
	
	for(i = 1; i < n; i++){
		if(i == 100) break;
		
		if(i%2 == 0 || i%7 == 0 || i%11 == 0){
			continue;
		}
		
		printf("%d ", i);
	}
}
/*
3. Dengan menggunakan pernyataan break dan continue, buatlah program untuk 
membuat program dengan input n, dan output, bilangan ganjil kecuali kelipatan 7 
dan 11 mulai dari 1 sampai < n atau bilangan tersebut <100
*/
