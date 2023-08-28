#include <stdio.h>

int main(){
	int n, i;
	
	printf("masukkan bilangan : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
//		if((i != 1) || (i != n)) printf("*");
		
		printf("%d", i);
		
		if(i != n) printf("*");
	}
	
	printf("\n");
}
/*
7. Gunakan loop for untuk membuat program sebagai berikut: 
input : n 
output : 1*2*3*4*5*… *n (faktorial)
*/
