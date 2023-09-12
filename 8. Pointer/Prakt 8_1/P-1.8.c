#include <stdio.h>

int main(){
	int count = 10, *temp, sum = 7;
	
	temp = &count; 
	*temp = 32;		 // count = 32
	temp = &sum;	 // temp = &sum
	*temp = count;	 // *temp = 32, sum = 32 
	sum = *temp * 4; // sum = 32 * 4 = 128, *temp = sum, *temp = 128
	
	printf("\ncount = %d, *temp = %d, sum = %d\n", count, *temp, sum);
	// count = 32, *temp = 128, sum = 128
}
/*
8. main() { 
 int count = 10, *temp, sum = 7; 
 
 temp = &count; 
 *temp = 32; 
 temp = &sum; 
 *temp = count; 
 sum = *temp * 4; 
 
 printf("count=%d, *temp=%d, sum=%d\n", count,*temp, sum ); 
}
*/
