#include <stdio.h>

int main(){
	int i1, i2, *p1, *p2;
	
	i1 = 9;
	p1 = &i1;
	i2 = *p1 / 2 - 2 * 3;
	p2 = p1;
	
	printf("i1 = %d, i2 = %d, *p1 = %d, *p2 = %d\n", i1, i2, *p1, *p2);
	// 9  -2  9  9
	
	/* 
	karena p2 = p1; Jadi,
		&p1 : alamat asal p1
		p1  : alamat i1
		*p1 : 9
		&p2 : alamat asal p2
		p2  : alamat i1
		*p2 : 9
	*/
}
/*
7. main(){ 
 int i1, i2, *p1, *p2; 
 
 i1 = 9; 
 p1 = &i1; 
 i2 = *p1 / 2 – 2 * 3; 
 p2 = p1; 
 
 printf("i1=%d,i2=%d,*p1=%d,*p2=%d\n",i1,i2,*p1,*p2); 
} 
*/
