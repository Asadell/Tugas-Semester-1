#include <stdio.h>

int main(){
	int n, i, j;
	
	printf("\nMasukkan bilangan n : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
}
/*
1. Dengan menggunakan pernyataan nested loop, buatlah program berikut: 
input: n 
output: 
 1 2 3 4 5 … n 
 1 2 3 4 5 … n 
 1 2 3 4 5 … n n kali 
 …… 
 1 2 3 4 5 … n 

*/
