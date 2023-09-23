#include <stdio.h>

int main(){
	int n, tahun, minggu, hari, temp, kabisat;
	
	printf("\nJumlah hari : ");
	scanf("%d", &n);
	
	// cari tahun
	tahun = n / 365;
	minggu = (n % 365) / 7;
	hari = (n % 365) % 7;
	
	
	printf("\nHasil konversi adalah %d tahun, %d minggu dan %d hari", tahun, minggu, hari);
}
