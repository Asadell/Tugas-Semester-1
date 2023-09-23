#include <stdio.h>

int *rotasi(int *a, int *b, int *c){
	
	int temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
	
	
//	int tempA, tempB, tempC;
//	
//	tempA = *a;
//	printf("\nta_%d-", tempA);
//	
//	tempB = *b;
//	printf("\ntb_%d", tempB);
//	
//	tempC = *c;
//	printf("\ntc_%d", tempC);
//	
//	b = &tempA;
//	printf("\nb_%d-", *b);
//	
//	c = &tempB;
//	printf("\nc_%d", *c);
//	
//	a = &tempC;
//	printf("\na_%d", *a);

	
	puts("\nhalo");
	return a, b, c;
}

int main(){
	int a, b, c;
	
	printf("\nMasukkan angkat ke-1 : ");
	scanf("%d", &a);
	
	printf("\nMasukkan angkat ke-2 : ");
	scanf("%d", &b);
	
	printf("\nMasukkan angkat ke-3 : ");
	scanf("%d", &c);
	
	printf("\nAngka sebelum dirotasi\nA : %d, B : %d, C : %d", a, b, c);
	
	rotasi(&a, &b, &c);
	
	printf("\nAngka sesudah dirotasi\nA : %d, B : %d, C : %d", a, b, c);
}
/*
6. Buatlah sebuah program dengan mendefinisikan sebuah fungsi rotasi() yang menerima 
tiga parameter berupa variabel a, b, dan c. Fungsi ini melakukan rotasi sehingga nilai a 
berpindah ke b, b ke c dan nilai c ke a sekembalinya ke fungsi main().
*/
