#include <stdio.h>

int r, q = 7; 
int go_crazy(int *, int *); 

main() { 
	int *ptr1 = &q; 
	int *ptr2 = &q; 
	r = go_crazy(ptr1, ptr2); 
	printf("\nq=%d, r=%d, *ptr1=%d, *ptr2=%d\n",q,r,*ptr1,*ptr2); 
	// q=14, r=15, *ptr1=14, *ptr2=14
 
	ptr2 = &r; // *ptr2 = 15
	go_crazy(ptr2, ptr1); 
	printf("\nq=%d, r=%d, *ptr1=%d, *ptr2=%d\n",q,r,*ptr1,*ptr2); 
	// q=24, r=12, *ptr1=24, *ptr2=12
} 

int go_crazy(int *p1, int *p2){ // (7, 7) | (15, 14)
	int x = 5; 
	r = 12; 		//              | *ptr2 = *p1 = 12
	*p2 = *p1 * 2; 	// (7 * 2 = 14) | (12 * 2 = 24)
	p1 = &x; 		// *p1 = 5 | -
	return *p1 * 3; // (5 * 3 = 15) |
}
/*
10. int r, q = 7; 
 int go_crazy(int *, int *); 
 main() { 
 int *ptr1 = &q; 
 int *ptr2 = &q; 
 r = go_crazy(ptr1, ptr2); 
 printf("q=%d, r=%d, *ptr1=%d, *ptr2=%d\n",q,r,*ptr1,*ptr2); 
 
 ptr2 = &r; 
 
 go_crazy(ptr2, ptr1); 
 printf("q=%d, r=%d, *ptr1=%d, *ptr2=%d\n",q,r,*ptr1,*ptr2); 
 } 
 int go_crazy(int *p1, int *p2){ 
 int x = 5; 
 r = 12; 
 *p2 = *p1 * 2; 
 p1 = &x; 
 return *p1 * 3; 
 }
 */
