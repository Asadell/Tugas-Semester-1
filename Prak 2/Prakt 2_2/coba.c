#include <stdio.h>
// GAGAL
int main(){
	int result = 0, gajiPokok, istriSuami, anak, tahunKerja, transport;
	
	puts("Masukkan gaji pokok anda");
	scanf("%d", &gajiPokok);
	
	// tunjangan istri/suami
	puts("Jika anda punya istri/suami input angka 1, jika tidak 0");
	scanf("%d", &istriSuami);
	result += (gajiPokok/10) * istriSuami;
//	printf("%d\n", result);

	// tunjangan anak
	puts("Anda punya berapa anak");
	scanf("%d", &anak);
	result += (gajiPokok/20) * anak;
//	printf("%d\n", result);
	
	// THR
	puts("Anda sudah kerja berapa tahun?");
	scanf("%d", &tahunKerja);
	result += 5000*tahunKerja;
//	printf("%d\n", result);
	
	// Pajak
	result -= (gajiPokok * 0.15);
//	printf("%d\n", result);
	
	// transport
	puts("anda masuk kerja berapa hari sebulan");
	scanf("%d", &transport);
	result += 3000 * transport;
//	printf("%d\n", result);
	
	// polis asuransi
	result -= 20000;
	
	printf("Maka pendapatan anda diluar gaji pokok adalah %d", result);
	
	
	
}
/*
3. Buatlah program untuk menghitung total pendapatan bulanan seorang karyawan 
dengan ketentuan sebagai berikut: 
? Tunjangan istri/suami = 10% dari gaji pokok 
? Tunjangan anak = 5% dari gaji pokok untuk setiap anak 
? THR = Rp 5000 kali masa kerja (tahun) 
? (-) Pajak = 15% dari gaji pokok, tunjangan istri & anak 
? Bantuan transport = Rp 3000 kali masuk kerja (hari) 
? (-) Polis asuransi = Rp 20000 
tanda (-) artinya mengurangi pendapatan. 
Tentukan dahulu apa-apa saja yang akan menjadi input dan output (ke layar) dari 
program. Tentukan juga variabel-variabel yang akan digunakan beserta tipenya. 
*/
