#include <stdio.h>

int main(){
	int n, i, j;
	
	printf("\nMasukkan bilangan n : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			printf("%d ", i);
			
			if(i == j) break;
		}
		printf("\n");
	}
}
/*
2. Dengan menggunakan pernyataan nested loop, buatlah program berikut: 
input: n 
output: 
 1 
 2 2 
 3 3 3 n kali 
 …… 
 n n n n n … n 
*/
