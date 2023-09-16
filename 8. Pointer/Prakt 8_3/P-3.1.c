#include <stdio.h>

int main() { 
	static char *days[] = {"Sun", "Mon", "Tues", "Wed","Thu", "Fri", "Sat"}; 
	int i; 
	
	for( i = 0; i < 6; ++i ) 
		printf( "%s\n", days[i]);  // menampilkan Sun - Fri
 } 
/*
1. Array of Pointer to char 
 main() { 
 static char *days[] = {"Sun", "Mon", "Tues", "Wed","Thu", "Fri", "Sat"}; 
 int i; 
 for( i = 0; i < 6; ++i ) 
 printf( "%s\n", days[i]); 
 } 
*/
