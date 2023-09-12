#include <stdio.h>

int main(){
	int x = 1, y = 2, *ip;
	
	ip = &x;
	y = *ip;
	*ip = 3;
	
	printf("x = %d, y = %d", x, y); // 3 1
}
/*
6. main() { 
 int x = 1, y = 2, *ip; 
 
 ip = &x; 
 y = *ip; 
 *ip = 3; 
 
 printf(“x = %d, y = %d”, x, y); 
} 
*/
