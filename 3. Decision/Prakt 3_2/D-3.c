#include <stdio.h>

int main(){
	int bil;
	
	printf("nilai_angka = ");
	scanf("%d", &bil);
	
	if(bil <=40){
		puts("Nilai huruf adalah E");
	}else if(bil >40 && bil <=55){
		puts("Nilai huruf adalah D");
	}else if(bil >55 && bil <=60){
		puts("Nilai huruf adalah C");
	}else if(bil >60 && bil <=80){
		puts("Nilai huruf adalah B");
	}else if(bil >80 && bil <=100){
		puts("Nilai huruf adalah A");
	}
}
/*
3. Buat program untuk mengkonversikan nilai angka ke nilai huruf. 
Petunjuk : nilai_angka<=40 = E 
40<nilai_angka<=40 = D 
55<nilai_angka<=40 = C 
60<nilai_angka<=80 = B 
80<nilai_angka<=100 = A 
Input : nilai_angka = 62 
Output : Nilai huruf adalah B 

*/
