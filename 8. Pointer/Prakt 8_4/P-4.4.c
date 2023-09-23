#include <stdio.h>

char *my_strcpy(char *destination, char *source) { 
	char *p = destination; 		// *p mereference ke strA
	
	while (*source != '\0'){
 		*p++ = *source++; 		// mencopy strA ke strB sampai ketemu \0 (p == destination == strB)
//		printf("\n%s", destinastion);
 	} 
 	
 	*p = '\0'; 					// p index terakhir diisi dengan \0
 
 	return destination; 
} 


int main(){ 
	char strA[80]="A string to be used for demonstration"; 
	char strB[80]; 
 
	my_strcpy(strB, strA); 		// memanggil function untuk mencopy strA ke strB
	
	puts(strB); 				// output strB
} 


/*
4. Berikan ilustrasi dan jelaskan apa yang dilakukan oleh program di bawah ini 
 #include <stdio.h>
char *my_strcpy(char *, char *);
 main(){ 
 char strA[80]="A string to be used for demonstration"; 
 char strB[80]; 
 
 my_strcpy(strB, strA); 
 puts(strB); 
 } 
 char *my_strcpy(char *destination, char *source) { 
 char *p = destination; 
 while (*source != '\0') 
 { 
 *p++ = *source++; 
 } 
 *p = '\0'; 
 return destination; 
 } 
*/
