#include <stdio.h>

int main(){
	int bilangan1;
	
	scanf("%d", &bilangan1);
	
	if(bilangan1 >= 1 && bilangan1 <= 100){
		printf("%d ada dalam range 1-100\n", bilangan1);
		return 0;
	}
	
	printf("%d di luar range 1-100\n", bilangan1);
}
/*
6. Buatlah program yang menerima input sembarang bilangan bulat. Cek apakah input 
tsb ada pada range 1-100, dan tampilkan hasilnya. 
 Contoh : Masukkan sembarang bilangan : 50 
 Output : 50 ada dalam range 1-100 
 Masukkan sembarang bilangan : 105 
 Output : 105 di luar range 1-100 

*/
