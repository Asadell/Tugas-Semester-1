#include <stdio.h>

int main(){
	int a = 12, b = 2, c = 3, d = 4;
	
	//printf("a sisabagi b \t\t\t: %d\n", a % b); // hehehe
	printf("a %% b \t\t\t: %d\n", a % b);
	printf("a - c \t\t\t: %d\n", a - c);
	printf("a + b \t\t\t: %d\n", a + b);
	printf("a / d \t\t\t: %d\n", a / d);
	printf("a / d * d + a %% d \t: %d\n", a / d * d + a % d);
	printf("a %% d / d * a - c \t: %d\n", a % d / d * a - c);
}

/*
4. Diketahui variabel-variabel sebagai berikut: 
int a = 12, b = 2, c = 3, d = 4; 
Buat program untuk mencetak hasil : 
 a % b 
 a - c 
 a + b 
 a / d 
a / d * d + a % d 
a % d / d * a - c 
*/

