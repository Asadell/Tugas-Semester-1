#include <stdio.h>
#include <math.h>
#define PI 3.14159f

float radian(float drj){
	return (drj / 180.0) * PI;
}

void nilai(float data[3][13], float sudut[]){
	int i;
	
	for(i = 0; i < 13; i++){
		data[0][i] = sin(radian(sudut[i]));
		data[1][i] = cos(radian(sudut[i]));
		data[2][i] = tan(radian(sudut[i]));
	}
}

void isiderajat(float sudut[]){
	int i, drj;
	
	drj = 0;
	for(i = 0; i < 13; i++){
		sudut[i] = drj;
		drj += 30;
	}
}

void tampilkan(float data[3][13]){
	int i;
	
	puts("-----------------------------------");
	printf("| %4s | %6s | %6s | %6s |\n", "x", "Sin(x)", "Cos(x)", "Tan(x)");
	puts("-----------------------------------");
	
	for(i = 0; i < 13; i++){
		printf("| %4d | %6.2f | %6.2f | %6.2f |\n",i+1, data[0][i], data[1][i], data[2][i]);
	}
	
	puts("-----------------------------------");
}

int main(){
	float sudut[13], data[3][13];
	
	isiderajat(sudut);
	nilai(data, sudut);
	tampilkan(data);
}
/*
3. Buat program untuk menampilkan tabel berikut ini 
dengan menggunakan looping for() dan 2 buah 
array : 
- x[] sebagai array berdimensi satu yang 
diinisialisasi dengan sudut 0 s/d 360 
- data[] sebagai array berdimensi dua. data
adalah array yg berisi nilai sin, cos dan tan dari 
masing-masing nilai sudut yang ada dalam array 
x. 
Petunjuk : 
- gunakan fungsi radian() untuk mengkonversi 
nilai derajat menjadi radian. 
 rad = drjt / 180.0 * PI. 
 PI = 3.14159 
*/
