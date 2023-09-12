#include <stdio.h>

int bandingstr1(char kar1[], char kar2[]){
	return strcmp(kar1, kar2);
}

int main(){
	int result;
	char kar1[100], kar2[100];
	
	printf("\nMasukkan string pertama : ");
	fgets(kar1, 100, stdin);
	
	printf("\nMasukkan string kedua : ");
	fgets(kar2, 100, stdin);
	
	result = bandingstr1(kar1, kar2);
	
	printf("\nHasilnya adalah %d\n", result);
}
/*
2. a. Definisikanlah sebuah fungsi untuk membandingkan dua buah string yang menjadi 
parameternya secara CASE SENSITIVE (misalnya : bandingstr1()) 
b. Pada fungsi main() terimalah input 2 buah string yang akan dibandingkan.. Selanjutnya 
panggil fungsi bandingstr1() untuk membandingkan kedua string tsb dan tampilkan 
hasilnya di main() 
*/
