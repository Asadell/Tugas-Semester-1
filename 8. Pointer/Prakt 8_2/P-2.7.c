#include <stdio.h>

int main() { 
	char *text_pointer = "Good morning!";
	
	puts("_");
	
	// postfix prefix tidak ada bedanya
	for( ; *text_pointer != '\0'; text_pointer++) 
		printf("%c", *text_pointer); 
} 
/*
7. Berikan ilustrasi dan jelaskan apa yang dilakukan oleh potongan program di bawah ini 
 main() { 
 char *text_pointer = "Good morning!"; 
 for( ; *text_pointer != '\0'; ++text_pointer) 
 printf("%c", *text_pointer); 
 } 
*/
