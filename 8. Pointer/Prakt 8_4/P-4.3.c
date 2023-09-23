#include <stdio.h> 

char strA[80] = "A string to be used for demonstration"; 
char strB[80]; 

main(){ 
	char *pA, *pB; 
	
	puts(strA); 		// output strA full
	
	pA = strA; 			// pA reference ke array strA
	puts(pA); 			// output pA == output strA FULL
	
	pB = strB; 			// pB reference ke array strB
	
	putchar('\n'); 

	while(*pA != '\0'){ 
		*pB++ = *pA++; 	// men copy strA ke strB sampai ketermu \0
	} 
	
	*pB = '\0'; 
	
	puts(strB); 		// output strB
} 
/*
3. Berikan ilustrasi dan jelaskan apa yang dilakukan oleh program di bawah ini dan 
tampilkan hasil eksekusinya. 
#include <stdio.h> 
char strA[80] = "A string to be used for demonstration"; 
char strB[80]; 
main(){ 
 char *pA, *pB; 
 puts(strA); 
 pA = strA; 
 puts(pA); 
 pB = strB; 
 putchar('\n'); 
 while(*pA != '\0') 
 { 
 *pB++ = *pA++; 
 } 
 *pB = '\0'; 
 puts(strB); 
} 
Proses apakah yang sebenarnya dilakukan pada program tersebut ? 

*/
