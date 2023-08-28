#include <stdio.h>

int main(){
	int n, i;
	
	printf("masukkan bilangan : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		if(i%2 == 0) printf("-");
		
		printf("%d ", i);
	}
	
	printf("\n");
}
/*
6. Gunakan loop for untuk membuat program sebagai berikut: 
input : n 
output : 1 -2 3 -4 5 -6 7 -8 … n 
*/
