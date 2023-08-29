#include <stdio.h>

long int faktorial(int n){
	long int hasil = 1, i;
	
	for(i = 1; i <= n; i++){
		hasil *= i;
	}
	
	return hasil;
}

int main(){
	int n;
	long int result;
	
	printf("\nMasukkan bilangan : ");
	scanf("%d", &n);
	
	result = faktorial(n);
	
	printf("\nHasil faktorial dari %d adalah %ld\n", n, result);
}
/*
2. Buatlah program untuk menghitung faktorial dengan menggunakan 2 fungsi 
(main() dan faktorial()). Fungsi faktorial() memberikan return 
value bertipe long int yang akan dicetak ke layar dalam fungsi main().
*/
