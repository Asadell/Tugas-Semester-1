#include <stdio.h>

int main(){
	int n, i, total = 0, nilai, min, max;
	float mean;
	
	printf("Masukkan berapa jumlah data y ingin dimasukkan : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		printf("Masukkan nilai ke-%d : ", i);
		scanf("%d", &nilai);
		
		if(i == 1){
			min = nilai;
			max = nilai;
		}
		
		if(nilai > max){
			max = nilai;
		}else if(nilai < min){
			min = nilai;
		}
		
		total += nilai;
	}
	
	mean = total/n;
	
	printf("\nNilai minimal\t: %d\n", min);
	printf("Nilai maksimal\t: %d\n", max);
	printf("Nilai rata-rata\t: %.2f\n", mean);
}
/*
4. Buatlah program untuk menerima daftar nilai mahasiswa sbb : 
 Input : - Jumlah data (n) 
 - Nilai ke-1 s/d Nilai ke-n 
 Output : - Nilai minimal 
 - Nilai maksimal 
 - Nilai rata-rata (rata-rata = nilai total / jumlah data) 
 (Petunjuk : Gunakan loop for dan seleksi kondisi dengan if) 

*/
