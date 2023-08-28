#include <stdio.h>

int main(){
	int n, i, temp = 0;
	
	printf("Masukkan bilangan : ");
	scanf("%d", &n);
	
	for(i = 1; temp <= n; i++){
		printf("%d ", temp);
		
		temp += i;
	}
}
/*
4. Dengan menggunakan pernyataan nested loop, buatlah program berikut: 
input: n 
output: 
 0 1 3 6 10 15 21 28 …. Bilangan ke n 
*/
