#include <stdio.h>

int main(){
	int pilihan, bil1, bil2;
	float result;
	
	printf("Menu :\n1. Menghitung volume kubus \n2. Menghitung luas lingkaran \n3. Menghitung volume silinder.\nMasukkan pilihan anda : ");
	scanf("%d", &pilihan);
	
	switch(pilihan){
		case 1:
			printf("\nMasukkan panjang sisi kubus : ");
			scanf("%d", &bil1);
 			result = bil1 * bil1 * bil1; 
			break;
		case 2:
			printf("\nMasukkan panjang jari-jari lingkaran : ");
			scanf("%d", &bil1);
 			result = 3.14 * (bil1 * bil1); 
			break;
		case 3:
			printf("\nMasukkan panjang jari-jari lingkaran & tinggi silinder : ");
			scanf("%d %d", &bil1, &bil2);
 			result = 3.14 * (bil1 * bil1) * bil2; 
			break;
		default:
 			puts("\nInvalid input\n");
 			return 0;
	}
	printf("\nHasil perhitungan : %.2f\n", result);
}
/*
8. Buatlah program untuk menampilkan menu dan melakukan proses sbb : 
Menu : 1. Menghitung volume kubus 
 2. Menghitung luas lingkaran 
 3. Menghitung volume silinder. 
Input : pilihan user (1, 2 atau 3) 
Jika pilihan = 1, maka : 
Input : panjang sisi kubus 
Output : Volume kubus (vol = sisi3
) 
Jika pilihan = 2, maka : 
Input : panjang jari-jari lingkaran 
Output : Luas lingkaran (luas = 3.14 * r2
) 
Jika pilihan = 3, maka : 
Input : panjang jari-jari lingkaran & tinggi silinder 
Output : Volume silinder (vol = 3.14 * r2 * t) 
Jika pilihan selain 1, 2 & 3 (default) : Tampilkan pesan kesalahan. 
Petunjuk : gunakan switch-case 

*/
