#include <stdio.h>

int main(){ 
	int a, *b, **c; 
	a = 155; 
	b = &a; 
	c = &b; 
	
	printf("Nilai a = %d atau %d atau %d\n", a, *b, **c);
	// Nilai a = 155 atau 155 atau 155
	
	printf("b = %p = alamat a di memori\n", b); 
	// alamat a
	
	printf("c = %p = alamat b di memori\n", c); 
	// alamat b
	
	printf("alamat c di memori = %p\n", &c); 
	// alamat c sendiri
	
}
/*
2. Pointer yang menunjuk ke pointer yang lain. 
 main(){ 
 int a, *b, **c; 
 a = 155; 
 b = &a; 
 c = &b; 
 printf("Nilai a = %d atau %d atau %d\n", a, *b, **c); 
 printf("b = %p = alamat a di memori\n", b); 
 printf("c = %p = alamat b di memori\n", c); 
 printf("alamat c di memori = %p\n", &c); 
}
*/
