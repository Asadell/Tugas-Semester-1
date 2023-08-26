#include <stdio.h>

int main(){
	int tiket, paketan, sisa, result;
	
	puts("Anda ingin membeli berapa tiket?");
	scanf("%d", &tiket);
	
	// hitung per 3 tiket
	paketan = tiket / 3;
	sisa = tiket % 3;
	
	result = (paketan * 2 * 50000) + (sisa * 50000);
	
	printf ("Untuk %d tiket, anda harus membayar %d", tiket, result);
}
/*
4. Harga tiket pertandingan sepak bola, Rp 50.000,-. Bila membeli dua tiket (seharga 
Rp 100.000,-), maka ada bonus 1 tiket gratis. Buatlah program untuk menghitung biaya 
yang harus dibayar untuk sejumlah tiket yang diperlukan (diinputkan). 
Contoh: 
Seandainya akan dibeli 10 tiket, maka: 
10 tiket ? 3 x 3 + 1 ? 3 x (2 x Rp 50.000,-) + Rp 50.000,- = Rp 
350.000,- 
Seandainya akan dibeli 23 tiket, maka: 
23 tiket ? 7 x 3 + 2 ? 7 x (2 x Rp 50.000,-) + 2 x Rp 50.000,- = Rp 
800.000,-
Seandainya akan dibeli jmTiket buah tiket, maka: 
Hitung jmTiket / 3 . Seandainya diperoleh hasil bagi jm3 dan sisa bagi sm3, maka biaya 
adalah: 
jm3 x (2 x Rp 50.000,-) + sm3 x Rp 50.000,-
*/
