#include <stdio.h>

int main(){
	int pilihan;
	
	printf("Pilih hari yang Anda inginkan\n1. Senin\n2. Selasa\n3. Rabu\n4. Kamis\n5. Jum'at\n6. Sabtu\n7. Minggu\nMasukkan pilihan Anda : ");
	scanf("%d", &pilihan);
	
	switch(pilihan){
		case 1:
			puts("Pilihan Anda = Senin");
			break;
		case 2:
			puts("Pilihan Anda = Selasa");
			break;
		case 3:
			puts("Pilihan Anda = Rabu");
			break;
		case 4:
			puts("Pilihan Anda = Kamis");
			break;
		case 5:
			puts("Pilihan Anda = Jum'at'");
			break;
		case 6:
			puts("Pilihan Anda = Sabtu");
			break;
		case 7:
			puts("Pilihan Anda = Minggu");
			break;
		default:
 			puts("\nInvalid input\n");
 			return 0;
	}
}
/*
4. Buatlah program untuk menampilkan pilihan hari : 1 s/d 7 untuk pilihan Senin s/d 
Minggu. Selanjutnya, minta user utk memasukkan salah satu pilihan 1-7. 
Tampilkan nama hari yang terpilih (lihat contoh output) 
Implementasikan dengan menggunakan else-if dan switch case 

*/
