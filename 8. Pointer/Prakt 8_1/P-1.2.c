#include <stdio.h>

int main(){
	float *pu, nu;
	double u = 1234.0;
	
	pu = &u;
	nu = *pu;
	
	printf("Alamat dari u = %p\n", &u); // alamat u
	printf("Isi pu = %p\n", pu); // alamat u
	printf("Isi u = %lf\n", u); // 1234.00000
	printf("Nilai yang ditunjuk oleh pu = %f\n", *pu); // no ouput (beda tipe data)
	printf("Nilai nu = %f\n", nu); // no ouput (beda tipe data)
}
/*
2. main(){ 
 float *pu, nu; 
 double u = 1234.0; 
 pu = &u; 
 nu = *pu; 
 printf("Alamat dari u = %p\n", &u); 
 printf("Isi pu = %p\n", pu); 
 printf("Isi u = %lf\n", u); 
 printf("Nilai yang ditunjuk oleh pu = %f\n", *pu); 
 printf("Nilai nu = %f\n", nu); 
 } 
*/
