#include <stdio.h>

void c_to_m(float cm){
	printf("Hasilnya adalah %.4f", cm * 0.01);
}

void i_to_cm(float inchi){
	c_to_m(inchi * 2.54);
}

void f_to_i(float feet){
	i_to_cm(feet * 12);
}

int main(){
	float feet;
	
	printf("\nProgram untuk mengubah feet ke meter\n");
	printf("Masukkan satuan dari feet : ");
	scanf("%f", &feet);
	
	printf("\nJadi mengubah feet sebesar %.2f menjadi meter\n", feet);
	f_to_i(feet);
}
/*
2. Definisikanlah fungsi-fungsi sebagai berikut : 
- Fungsi f_to_i() untuk mengubah ukuran dari satuan kaki (feet) ke inci 
- Fungsi i_to_cm() untuk mengubah ukuran dari satuan inci ke centimeter 
- Fungsi c_to_m()untuk mengubah ukuran dari satuan centimeter ke meter 
Dalam main() mintalah masukan ukuran dalam satuan kaki (feet) kemudian lakukan 
konversi sampai mendapatkan keluaran berupa ukuran dalam meter. Tentukan jumlah 
dan tipe parameter dan return value yang dibutuhkan 
Keterangan : 1 kaki = 12 inchi, 1 inchi = 2.54 cm, 100 cm = 1 meter
*/
