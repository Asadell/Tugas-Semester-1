#include <stdio.h>

int main(){
	int isPelanggan, lembar;
	
	puts("Selamat datang di GRAFITY Fotocopy");
	
	printf("Apakah dia pelanggan? (0/1) : ");
	scanf("%d", &isPelanggan);
	
	if(isPelanggan == 1){
		puts("Anda mendapatkan harga sebesar Rp. 75,-");
		return 0;
	}
	
	printf("Berapa lembar kertas fotokopinya : ");
	scanf("%d", &lembar);
	
	if(lembar < 100){
		puts("Anda mendapatkan harga sebesar Rp. 150,-");
	}else if(lembar >= 100 && lembar <=200){
		puts("Anda mendapatkan harga sebesar Rp. 100,-");
	}else if(lembar > 200){
		puts("Anda mendapatkan harga sebesar Rp. 80,-");
	}
}
/*
2. Ada suatu kondisi dimana pada tempat fotokopi "GRAFITY Fotocopy"
apabila dia pelanggan pada tempat itu maka berapa lembar pun 
banyaknya dia fotokopi di dapat harga Rp.75,-.
tapi jika dia bukan pelanggan maka :
a. jika dia fotokopi kurang dari 100 lembar maka dapet harga Rp.150,-
b. jika fotokopi sebanyak 100-200 lembar dapet harga Rp.100,-
c. tapi jika fotokopi lebih dari 200 lembar dia dapet harga Rp.80,-
Buatlah program untuk menentukan berapa yang dibayar oleh seorang yang 
melakukan fotokopi.
*/
