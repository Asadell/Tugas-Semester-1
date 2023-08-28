#include <stdio.h>

int main(){
	int harga;
	
	scanf("%d", &harga);
	
	if(harga >= 100000){ // 100_000
		harga -= 0.05 * harga;
	}
	
	printf("Total yang harus dibayar adalah Rp. %d\n", harga);
}
/*
3. Buat program menggunaan pernyataan if adalah untuk menentukan besarnya potongan harga 
yang diterima oleh seorang pembeli, berdasarkan kriteria :
• tidak ada potongan harga jika total pembelian kurang dari Rp. 100.000 (dalam hal ini potongan 
harga diinisialisasi dengan nol).
• bila total pembelian lebih dari atau sama dengan Rp. 100.000, potongan harga yang diterima 
dirubah menjadi sebesar 5% dari total pembelian.
Contoh input = 50.000
Output = Total yang harus dibayar adalah Rp. 50.000
*/
