#include <stdio.h>

int main(){
	int y, x = 87;
	int *px;
	
	px = &x;
	y = *px;
	
	printf("Alamat x = %p\n", &x); // alamat x
	printf("Isi px = %p\n", px); // alamat x
	printf("Isi x = %d\n", x); // 87
	printf("Nilai yang ditunjuk oleh px = %d\n", *px); // 87
	printf("Nilai y = %d\n", y); // 87
}
/*
1. main(){ 
 int y, x = 87; 
 int *px; 
 
 px = &x; 
 y = *px; 
 
 printf("Alamat x = %p\n", &x); 
 printf("Isi px = %p\n", px); 
 printf("Isi x = %d\n", x); 
 printf("Nilai yang ditunjuk oleh px = %d\n", *px); 
 printf("Nilai y = %d\n", y); 
 } 
*/
