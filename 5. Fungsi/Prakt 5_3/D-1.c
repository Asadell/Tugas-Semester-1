#include <stdio.h>

int tukar(int bil1, int bil2){
	return (bil1 > bil2) ? bil1 : bil2;
}

int main(){
	int bil1, bil2;
	
	printf("Masukkan bilangan ke-1 : ");
	scanf("%d", &bil1);
	
	printf("Masukkan bilangan ke-2 : ");
	scanf("%d", &bil2);
	
	printf("\nBilangan yang lebih besar antara %d dan %d adalah %d\n", bil1, bil2, tukar(bil1, bil2));
}
/*
1. Definisikanlah function untuk menentukan bilangan terbesar dari 2 bilangan yang 
diinputkan di main(). Function mempunyai parameter berupa 2 buah bilangan yang 
akan dibandingkan dan memberikan return value berupa bilangan yang terbesar. 
Sertakan pula prototype function tsb. 
*/
