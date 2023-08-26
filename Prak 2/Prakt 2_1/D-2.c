#include <stdio.h>

int main(){
	float dollar, rupiah = 11090;
	
	puts("Masukkan uang dollar nya");
	scanf("%f", &dollar);
	
	puts("uang anda jika dikonversi ke rupiah");
	printf("Jika diasumsikan 1 dollar adalah %.2f rupiah, menjadi sekitar %.2f rupiah", rupiah, dollar*rupiah);
}

/*
2. Melakukan konversi valuta asing, misalnya mata uang dolar US ke mata uang Rp, 
dimana satu dolar sama dengan Rp 11.090 ,- 
Input : uang dalam US dolar 
Proses : uang_rupiah = uang_dolar * 11090 
Output : uang rupia
*/
