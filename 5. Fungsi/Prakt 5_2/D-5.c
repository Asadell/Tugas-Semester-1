#include <stdio.h>

float konversi(float n, char asal, char tujuan){
	float result = 0;
	
	if (asal == 'C' && tujuan == 'F') {
        result = (9.0 / 5.0) * n + 32;
    } else if (asal == 'C' && tujuan == 'R') {
        result = (4.0 / 5.0) * n;
    } else if (asal == 'F' && tujuan == 'C') {
        result = (5.0 / 9.0) * (n - 32);
    } else if (asal == 'F' && tujuan == 'R') {
        result = (4.0 / 9.0) * n;
    } else if (asal == 'R' && tujuan == 'C') {
        result = (5.0 / 4.0) * n;
    } else if (asal == 'R' && tujuan == 'F') {
        result = (9.0 / 4.0) * n + 32;
    }
	
	return result;
}

int main(){
	float n, hasil;
	char asal, tujuan;
	
	printf("Masukkan besaran suhu sumber : ");
	scanf("%f", &n);
	fflush(stdin);
	
	puts("\nC = Celcius, F = Fahrenheit, R = Reamur");
	printf("Masukkan satuan asal (KAPITAL) : ");
	scanf("%c", &asal);
	fflush(stdin);
	
	puts("\nC = Celcius, F = Fahrenheit, R = Reamur");
	printf("Masukkan satuan tujuan (KAPITAL) : ");
	scanf("%c", &tujuan);
	fflush(stdin);
	
	hasil = konversi(n, asal, tujuan);
	
	printf("\nHasil konversi suhu %.2f %c = %.2f %c\n", n, asal, hasil, tujuan);
}
/*
5. a. Definisikan sebuah fungsi float konversi(suhu, asal, tuj), untuk 
mengkonversikan suhu dari Celsius ke Fahrenheit, Celsius ke Reamur, 
Fahrenheit ke Celsius, Fahrenheit ke Reamur, Reamur ke Celsius, dan Reamur 
ke Fahrenheit. Dimana suhu adalah suhu sumber, asal adalah satuan awal suhu 
yang akan dikonversi dan tuj adalah satuan hasil konversi 
b. Tulislah prototipe fungsi untuk fungsi tersebut. 
c. Buat function main() untuk memanggil function konversi(), setelah 
sebelumnya meminta masukan nilai suhu, satuan asal dan satuan tujuannya.
*/
