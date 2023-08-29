#include <stdio.h>

void tambahDua(int *bil1, int *bil2){
	*bil1 += 2;
	*bil2 += 2;
}

int main(){
	int bil1, bil2;
	
	printf("\nMasukkan bilangan ke-1 : ");
	scanf("%d", &bil1);
	
	printf("\nMasukkan bilangan ke-2 : ");
	scanf("%d", &bil2);
	
	tambahDua(&bil1, &bil2);
	
	printf("\nBilangan ke-1 berubah menjadi : %d\n", bil1);
	
	printf("\nBilangan ke-2 berubah menjadi : %d\n", bil2);
}
/*
3. Buatlah sebuah fungsi untuk mengubah dua bilangan masukan, masing-masing 
dinaikkan dengan 2. Masukan dilakukan di main(). Selanjutnya tampilkan hasil 
akhir bilangan setelah dirubah di main(). 
Gunakan pass by reference ! 
*/
