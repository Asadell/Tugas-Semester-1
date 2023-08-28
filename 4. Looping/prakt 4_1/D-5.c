#include <stdio.h>

int main(){
	int n, i;
	
	printf("masukkan bilangan : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		if(i%2 == 1) printf("%d ", i);
	}
	
	printf("\n");
}
/*
5. Gunakan loop for untuk membuat program sebagai berikut: 
input : n 
output : 1 3 5 7 … m ( m = bilangan ganjil ke n) 

*/
