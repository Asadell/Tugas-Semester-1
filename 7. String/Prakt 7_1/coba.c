#include <stdio.h>

void balikstr(char karakter[], int length);

int pjgstr(char karakter[]){
	int length = 0;
	
	while(1){ // looping teruss
		if(karakter[length] == '\n'){ // \0
			return length;
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
	
//	balikstr(karakter, length);
	
	printf("\nMaka hasil string yang sudah dibalik ialah\n== %s ==\n", karakter);
}

void balikstr(char karakter[], int length){
	int i;
	
	for(i = 0; i < (length/2); i++){
		swap(karakter[i], karakter[length - i - 1]);
	}
}

/*
3. a. Copy-lah program dari soal no 2. Definisikanlah sebuah fungsi untuk membalik string 
yang menjadi parameternya (misalnya : balikstr()) 
b. Pada fungsi main() terimalah input string yang akan dihitung panjang karakternya dan 
dibalik. Selanjutnya panggil fungsi pjgstr() dan balikstr()untuk mendapatkan 
kebalikan dari string input dan tampilkan hasilnya di main()
*/
