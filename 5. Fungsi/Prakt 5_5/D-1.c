#include <stdio.h>

int masukan(int jumlahData){
	int i, n, total = 0;
	
	for(i = 1; i <= jumlahData; i++){
		printf("\nMasukkan bilangan ke-%d : ", i);
		scanf("%d", &n);
		
		total += n;
	}
	
	return total;
}

float average(int jumlahData, int total){
    return (float)total / jumlahData;
}

int main(){
	int n, total;
	float ratarata;
	
	printf("\nMasukkan jumlah data yang anda inputkan : ");
	scanf("%d", &n);
	
	total = masukan(n);
	ratarata = average(n, total);
	
	printf("\nMaka rata-rata dari semua bilangan adalah %.2f\n", ratarata);
}
/*
1. Definisikanlah fungsi main(), masukan() dan average(), sebagai berikut : 
- Fungsi masukan() menerima satu parameter berupa jumlah data yang akan 
dimasukkan dan memberikan return value berupa nilai total dari seluruh data yang 
dimasukkan. Fungsi ini bertugas menerima masukan data sebanyak n kali dan 
sekaligus menghitung total nilai seluruh data. 
- Fungsi average() menerima dua parameter berupa jumlah data yang telah 
dimasukkan dan nilai total seluruh data. Fungsi ini memberikan return value 
berupa nilai rata-rata dari seluruh data yang dimasukkan. 
- Pada fungsi main()mintalah masukan jumlah data yang akan diinputkan. 
Selanjutnya lakukan pemanggilan fungsi masukan() dan average(), 
kemudian tampilkan nilai rata-rata dari seluruh datanya. 
*/
