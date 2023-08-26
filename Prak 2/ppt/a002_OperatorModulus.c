#include <stdio.h>

int main(){
	int bil1, bil2, sisaBagi;
	
	printf("Masukkan bilangan ke-1 : ");
	scanf("%d", &bil1);
	
	printf("Masukkan bilangan ke-2 : ");
	scanf("%d", &bil2);
	
	sisaBagi = bil1 % bil2;
	
	printf("sisa pembagian %d dengan %d adalah %d\n", bil1, bil2, sisaBagi);
}

/*
•Operator aritmatika (modulus) digunakan pada baris ke-9 pada program di atas
• Program di atas diuji coba sebanyak 3 kali dengan nilai masukan yang berbeda-beda:
• Contoh 1: 15%3 = 0 ?? 15 – (3*5) = 0
• Contoh 2: 15%4 = 3 ?? 15 – (4*3) = 3
• Contoh 3: 15%2 = 1 ?? 15 – (2*7) = 1
*/
