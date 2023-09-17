#include <stdio.h>

int main(){
	int a[5] = {2,4,8,1,23}; 
	int c = 5; 
	int *ptr1 = &c;
	int *ptr2 = a;
	
	printf("\n is %d == %d : ", a, c);
	(a == c) ? puts("B") : puts("S");
	
	printf("\n is *c == 6 : ERROR\n");
//	printf("\n is %s == %d : ERROR", *c, 6);
//	(*c == 6) ? puts("B") : puts("S"); // error
	
	printf("\n is %d == %d : ", a[2], c);
	(a[2] == c) ? puts("B") : puts("S");
	
	printf("\n is %d == %d : ", *ptr2, c);
	(*ptr2 == c) ? puts("B") : puts("S");
	
	printf("\n is %d == %d : ", &ptr1, c);
	(&ptr1 == c) ? puts("B") : puts("S");
	
	printf("\n is %d == %d : ", *(ptr2 + 1), *(a + 3));
	(*(ptr2 + 1) == *(a + 3)) ? puts("B") : puts("S");
	
	printf("\n is %d == %d : ", c, *(ptr2 + 1));
	(c == *(ptr2 + 1)) ? puts("B") : puts("S");
	
	printf("\n is %d == %d : ", c, &ptr1);
	(c == &ptr1) ? puts("B") : puts("S");
	
	printf("\n is %d == %d : ", c, a[3] + 2);
	(c == a[3] + 2) ? puts("B") : puts("S");
	
	printf("\n is %d == %d : ", *(ptr2 + 2), *ptr1);
	(*(ptr2 + 2) == *ptr1) ? puts("B") : puts("S");
}
/*
6. Tentukan setiap statemen di bawah ini benar atau salah. Jika salah sertakan alasannya. 
Deklarasi : 
int a[5] = {2,4,8,1,23}; 
int c = 5; 
int *ptr1 = &c; 		== *ptr1 == 5
int *ptr2 = a; 			=

Statement Benar (beri tanda X) Salah (beri tanda X) 
a = c; 					== S | array != 5
*c = 6; 				== S | 5 != 6 | ERROR
a[2] = c; 				== S | 8 != 5
*ptr2 = c; 				== S | 2 != 5
&ptr1 = c; 				== S | alamat_ptr1 != 5
*(ptr2 + 1) = *(a + 3);	== S | 4 != 1 | *(ptr2 + 1) == 4, *(a + 3) == a[3]
c = *(ptr2 + 1); 		== S | 5 != 4 | *(ptr2 + 1) == a[1]
c = &ptr1; 				== S | 5 != alamat_ptr1
c = a[3] + 2; 			== S | 5 != 1 + 2
*(ptr2 + 2) = *ptr1;	== S | 8 != 5 | *(ptr2 + 2) == a[2]
*/
