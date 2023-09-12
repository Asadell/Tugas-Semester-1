#include <stdio.h>

void copystr(char kar1[], char kar2[]){
	int i;
	
	for(i = 0; kar1[i] != '\0'; i++){
		kar2[i] = kar1[i];
	}
}

int main(){
	char kar1[100], kar2[100];
	
	fgets(kar1, sizeof kar1, stdin);
	kar1[strcspn(kar1, "\n")] = '\0';
	
	puts("\nSebelum string dicopy");
	printf("%s === %s\n\n", kar1, kar2);
	
	copystr(kar1, kar2);
	
	puts("\nSesudah string dicopy");
	printf("%s === %s\n\n", kar1, kar2);
}
/*
4. a. Definisikanlah sebuah fungsi untuk meng-copy string dengan menjadikan string asal dan 
string tujuan menjadi parameter fungsi tsb (misalnya : copystr()) 
b. Pada fungsi main() terimalah input string yang akan di-copy. Selanjutnya panggil 
fungsi copystr()untuk mengcopy string asal ke string tujuan, tampilkan hasilnya 
berupa kedua string (asal dan tujuan) di main().

karakter[strcspn(karakter, "\n")] = '\0';
*/
