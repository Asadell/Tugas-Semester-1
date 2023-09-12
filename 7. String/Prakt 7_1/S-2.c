#include <stdio.h>

int pjgstr(char karakter[]){
	int length = 0;
	
	karakter[strcspn(karakter, "\n")] = '\0'; // Mengganti newline dengan terminator string nol

	while(1){ // looping teruss
		if(karakter[length] == '\0'){ // \0
			return ++length; // prefix
		}
		
		length++;
	} 
}

int main(){
	int length;
	char karakter[100];
	
	fgets(karakter, sizeof karakter, stdin);
	
	length = pjgstr(karakter);
	
	printf("\nPanjang dari string %s, adalah %d\n", karakter, length);
}
/*
2. a. Definisikanlah sebuah fungsi untuk menghitung panjang dari string yang menjadi 
parameternya (misalnya : pjgstr()) 
b. Pada fungsi main() terimalah input string yang akan dihitung panjang karakternya. 
Selanjutnya panggil fungsi pjgstr() untuk mendapatkan panjang string dan tampilkan 
hasilnya di main()
*/
