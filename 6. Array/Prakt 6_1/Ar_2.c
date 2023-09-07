#include <stdio.h>

int main(){
	int jml, i, result = 0, bil1 = 0, bil2 = 1;
	
	puts("\nBILANGAN FIBONACCI");
	printf("Berapa panjang deret (maks 20) : ");
	scanf("%d", &jml);
	
	printf("\n%d deret bilangan Fibonacci adalah\n", jml);
	
	for(i = 0; i < jml; i++){
		printf("%d", result);
		if(i != (jml-1)) printf(", ");
		
		bil1 = bil2;
		bil2 = result;
		result = bil1 + bil2;
	}
	
	puts("\n\nSelesai");
}
/*
2. Deret fibonacci adalah deret yang dimulai dengan dua angka yang bernilai 0 dan 1, 
kemudian deret ketiga ditentukan dari penjumlahan kedua angka tersebut, sedangkan deret 
keempat ditentukan dari dua angka sebelumnya begitu seterusnya. Sehingga didapatkan 
deret fibonanci sebagai berikut: 0 1 1 2 3 5 8 13 21 … 
 Buatlah program untuk meminta input dari user berupa sebuah bilangan, kemudian 
tampilkan deret fibonacci mulai dari 1 sampai dengan bilangan tsb. 
*/
