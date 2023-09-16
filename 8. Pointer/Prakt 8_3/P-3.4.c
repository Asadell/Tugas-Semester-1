#include <stdio.h>

int main(){ 
	int a, *b, **c; 
	a = 1975; 
	b = &a; 
	c = &b; 
	
	printf("Nilai a = %d atau %d atau %d\n", a, *b, **c);
	// Nilai a = 1975 atau 1975 atau 1975
	
	printf("b = %p = alamat a di memori\n", b);
	// alamat dari a
	
	printf("c = %p = alamat b di memori\n", c);
	// alamat dari b
	
	printf("alamat c di memori = %p\n", &c);
	// alamat dari c sendiri
	
}
/*
4. #include <stdio.h> 
main(){ 
 int a, *b, **c; 
 a = 1975; 
 b = &a; 
 c = &b; 
 printf("Nilai a = %d atau %d atau %d\n", a, *b, **c); 
 printf("b = %p = alamat a di memori\n", b); 
 printf("c = %p = alamat b di memori\n", c); 
 printf("alamat c di memori = %p\n", &c); 
}
*/
