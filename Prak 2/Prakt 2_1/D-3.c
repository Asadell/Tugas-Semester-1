#include <stdio.h>

int main(){
	int uang, count = 0;
	
	// input user
	scanf("%d", &uang);
	
	
	// 100_000
	count = uang / 100000;
	uang = uang % 100000;
	printf("%d lembar 100.000\n", count);
	
	// 50_000
	count = uang / 50000;
	uang = uang % 50000;
	printf("%d lembar 50.000\n", count);
	
	// 20_000
	count = uang / 20000;
	uang = uang % 20000;
	printf("%d lembar 20.000\n", count);
	
	// 10_000
	count = uang / 10000;
	uang = uang % 10000;
	printf("%d lembar 10.000\n", count);
	
	// 5_000
	count = uang / 5000;
	uang = uang % 5000;
	printf("%d lembar 5.000\n", count);
	
	// 2_000
	count = uang / 2000;
	uang = uang % 2000; 
	printf("%d lembar 2.000\n", count);
	
	// 1_000
	count = uang / 1000;
	uang = uang % 1000;
	printf("%d lembar 1.000\n", count);
	
}

/*
3. Menentukan banyaknya uang pecahan yang dibutuhkan, urut dari pecahan terbesar 
(100000,50000,20000,10000,5000,2000,1000) 
Input: jumlah uang dalam rupiah (misal : 189000) 
Proses: ratusanribu = jml_uang dibagi 100000 
sisa = jml_uang – (ratusanribu*100000) 
limaplhribu = sisa dibagi 50000 
sisa = sisa – (limaplhribu*50000) 
dan seterusnya. 
Output : 1 Lembar 100000 
1 Lembar 50000 
1 Lembar 20000 
1 Lembar 10000 
1 Lembar 5000 
2 Lembar 2000 

*/
