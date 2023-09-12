#include <stdio.h>

int main(){
	int count = 13, sum = 9, *x, *y;
	
	x = &count; 		// *x = count = 13
	*x = 27; 			// *x = count = 27
	y = x;				// *y = 27
	x = &sum;			// *x = 9
	*x = count;			// *x = 27, sum = 27
	sum = *x / 2 * 3;	// *x = sum = 13 * 3 = 39
	
	printf("\ncount = %d, sum = %d, *x = %d, *y = %d\n", count, sum, *x, *y);
	// count = 27, sum = 39, *x = 39, *y = 27
}
/*
9. main(){ 
 int count = 13, sum = 9, *x, *y; 
 
 x = &count; 
 *x = 27; 
 y = x; 
 x = &sum; 
 *x = count; 
 sum = *x / 2 * 3; 
 printf("count=%d, sum=%d, *x=%d, *y=%d\n", count,sum,*x,*y); 
}
*/
