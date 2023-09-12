#include <stdio.h>

// ================================== No 2 ==================================
//int pjgstr(char karakter[]){
//	return strlen(karakter);
//}
//
//int main(){
//	int length;
//	char karakter[100];
//	
//	fgets(karakter, sizeof karakter, stdin);
//	karakter[strcspn(karakter, "\n")] = '\0';
//	
//	length = pjgstr(karakter);
//	
//	printf("\nPanjang dari string \"%s\", adalah %d\n\n", karakter, ++length); // prefix
//}
// ================================== No 2 ================================== 

// ================================== No 3 ==================================
//void balikstr(char karakter[], int length){
//	strrev(karakter); // tidak butuh length
//}
//
//int pjgstr(char karakter[]){
//	return strlen(karakter);
//}
//
//int main(){
//	int length;
//	char karakter[100];
//	
//	fgets(karakter, sizeof karakter, stdin);
//	karakter[strcspn(karakter, "\n")] = '\0';
//	
//	length = pjgstr(karakter);
//	
//	printf("\nPanjang dari string \"%s\", adalah %d\n\n", karakter, ++length); // prefix
//	
//	balikstr(karakter, length);
//	
//	printf("\nMaka hasil string yang sudah dibalik ialah\n== %s ==\n", karakter);
//}
// ================================== No 3 ==================================


// ================================== No 4 ==================================
void copystr(char kar1[], char kar2[]){
	strcpy(kar2, kar1);
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
// ================================== No 4 ==================================

/*
1. Ulangilah soal nomor 2, 3 & 4 pada modul prakt String 1
dengan menggunakanfungsifungsi standard (built-in functions) 
*/
