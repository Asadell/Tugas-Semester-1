#include <stdio.h>

int main(){
	
	// soal no 2 ke float ========================================================
//	float dollar, rupiah = 11090;
//	
//	puts("Masukkan uang dollar nya");
//	scanf("%f", &dollar);
//	
//	puts("uang anda jika dikonversi ke rupiah");
//	printf("Jika diasumsikan 1 dollar adalah %.2f rupiah, menjadi sekitar %.2f rupiah", rupiah, dollar*rupiah);
	
	
	// soal no 3 ke float =================================================================
	float uang, count = 0;
	
	// input user
	scanf("%d", &uang);
	
	
	// 100_000
	count = uang / 100000;
	uang = uang % 100000;
	printf("%d lembar 100.000\n", count);
	
	// 50_000
	count = uang / 50000;
	uang = uang % 50000;
	printf("%d lembar 50.000\n", count);
	
	// 20_000
	count = uang / 20000;
	uang = uang % 20000;
	printf("%d lembar 20.000\n", count);
	
	// 10_000
	count = uang / 10000;
	uang = uang % 10000;
	printf("%d lembar 10.000\n", count);
	
	// 5_000
	count = uang / 5000;
	uang = uang % 5000;
	printf("%d lembar 5.000\n", count);
	
	// 2_000
	count = uang / 2000;
	uang = uang % 2000; 
	printf("%d lembar 2.000\n", count);
	
	// 1_000
	count = uang / 1000;
	uang = uang % 1000;
	printf("%d lembar 1.000\n", count);
}

/*
6. Kerjakan soal no2 dan 3. dengan mengubah tipe datanya menjadi float. 
*/
