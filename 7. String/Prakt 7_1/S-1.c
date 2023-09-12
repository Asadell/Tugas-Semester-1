#include <stdio.h>

int main(){
	char karakter [10];
	
//	scanf("%s", karakter); // setelah spasi tidak diambil
	
//	gets(karakter); // out of bounds (melebihi batasan yang ditetapkan
	
	fgets(karakter, sizeof karakter, stdin); // aman bolo (kok ada newline nyaa)
	/*
		misal input "yuhu"
		karakter yang tersimpan di fgets 
		'y' 'u' 'h' 'u' '\n' '\0' 
		 0   1   2   3    4    5
		 
		 ada 5 karakter yang masuk; 
	*/
	
	printf("\n%s_nah", karakter);
}
/*
1. Lakukan percobaan untuk menginputkan string dari keyboard dengan menggunakan : 
scanf(), gets() dan fgets(). Analisislah dan berikan kesimpulan untuk setiap 
fungsi tsb. 
*/
