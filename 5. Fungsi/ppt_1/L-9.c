#include <stdio.h>

float hitung(float absensi, float tugas, float uts, float uas){
	return absensi * (0.1) + tugas * (0.2) + uts * (0.3) + uas * (0.4);
}

int main(){
	float absensi, tugas, uts, uas, result;
	
	puts("Program Hitung Nilai Akhir Mata Kuliah");
	
	printf("\nMasukkan Nilai Absensi : ");
	scanf("%f", &absensi);
	fflush(stdin);
	
	printf("Masukkan Nilai Tugas : ");
	scanf("%f", &tugas);
	fflush(stdin);
	
	printf("Masukkan Nilai U.T.S : ");
	scanf("%f", &uts);
	fflush(stdin);
	
	printf("Masukkan Nilai U.A.S : ");
	scanf("%f", &uas);
	fflush(stdin);
	
	result = hitung(absensi, tugas, uts, uas);
	
	printf("\nMaka Nilai Akhir Mata Kuliah anda adalah %.2f\n", result);
}
/*
80 * 0.1__8
75 * 0.2__8 + 15
58 * 0.3__8 + 15 + 17,4
97 * 0.4__8 + 15 + 17,4 + 38.8

9. Dengan menggunakan fungsi, buatlah program menghitung nilai akhir perkuliahan pada suatu 
matakuliah, dengan ketentuan sebagai berikut: 
Nilai Absensi * 10 % 
Nilai Tugas * 20 % 
Nilai U.T.S * 30 % 
Nilai U.A.S * 40 % 
Tampilan yang diinginkan: 
Program Hitung Nilai Akhir Mata Kuliah 
Masukkan Nilai Absensi : ……<di-input> 
Masukkan Nilai Tugas : ……<di-input> 
Masukkan Nilai U.T.S : ……<di-input> 
Masukkan Nilai U.A.S : ……<di-input> 
Nilai akhir yang diperoleh sebesar = <output>
*/
