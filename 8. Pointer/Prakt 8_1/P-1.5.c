#include <stdio.h>

int main(){
	char c = 'Q', *cp = &c;
	
	printf("%c %c\n", c, *cp); // Q Q
	c = '/';
	printf("%c %c\n", c, *cp); // / /
	*cp = '(';
	printf("%c %c\n", c, *cp); // ( (
}
/*
5. main(){ 
 char c = 'Q', *cp = &c; 
 
 printf("%c %c\n", c, *cp); 
 c = '/'; 
 printf("%c %c\n", c, *cp); 
 *cp = '('; 
 printf("%c %c\n", c, *cp); 
} 
*/
