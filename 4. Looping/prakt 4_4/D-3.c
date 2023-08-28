#include <stdio.h>

int main(){
	int n, isPrima, i, j;
	
	printf("\nMasukkan bilangan : ");
	scanf("%d", &n);
	
	for(i = 2; i <= n; i++){
		isPrima = 1;
		for(j = 2; j <= i/2; j++){
			if(i % j == 0){
				isPrima = 0;
				break;
			}
		}
		
		if(isPrima){
			printf("%d ", i);
		}
	}
}
/*
3. Dengan menggunakan pernyataan nested loop, buatlah program berikut: 
input: n 
output: 
 2 3 5 7 11…. Bilangan prima ke n 
*/
