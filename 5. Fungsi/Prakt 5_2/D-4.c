#include <stdio.h>

float radian(float derajat){
	float PI = 3.14159f;
	
	return (derajat / 180.0f) * PI;
}

int main(){
	float n, result;
	
	printf("\nMasukkan derajat yg akan dikonversi ke radian : ");
	scanf("%f", &n);
	
	result = radian(n);
	
	printf("\nMaka hasil konversi %.2f derajat ke radian\nSebesar : %.5f", n, result);
}
/*
4. a. Definisikan sebuah fungsi radian() yang berfungsi untuk mengkonversi 
besaran sudut dari derajat ke radian dengan rumus sbb : rad = drjt / 180.0f * PI. 
Fungsi tersebut memiliki sebuah parameter yaitu derajat yang akan dikonversi, 
dan memiliki sebuah return value berupa hasil konversi dalam radian. 
b. Tulislah prototipe fungsi untuk fungsi tersebut. 
c. Buat function main untuk memanggil function radian(), setelah sebelumnya 
meminta masukan nilai derajat yang akan dikonversi. 
d. Definisikan PI sebagai sebuah konstanta yang bernilai : 3.14159f
*/
