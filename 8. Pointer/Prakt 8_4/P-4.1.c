#include <stdio.h> 

void naikkan_nilai(int *, float *); 

main(){ 
	int a = 3; 
	float b = 7.5f; 
 
	printf("SEMULA : a = %d b = %.1f\n", a, b); // 3, 7.5
 
	naikkan_nilai(&a, &b); 
	
	printf("KINI : a = %d b = %.1f\n", a, b); // 5, 10
} 

void naikkan_nilai(int *x, float *y){  // 3, 7.5
	*x = *x + 2; // a = 3 + 2 = 5
	*y = *y + 2.5f; // b = 7.5 + 2.5 = 10
} 
/*
1. Fungsi dengan argumen berupa pointer. 
#include <stdio.h> 
void naikkan_nilai(int *, float *); 
main(){ 
 int a = 3; 
 float b = 7.5f; 
 
 printf("SEMULA : a = %d b = %d\n", a, b); 
 
 naikkan_nilai(&a, &b); 
 printf("KINI : a = %d b = %d\n", a, b); 
} 
void naikkan_nilai(int *x, float *y){ 
 *x = *x + 2; 
 *y = *y + 2.5f; 
} 
*/
