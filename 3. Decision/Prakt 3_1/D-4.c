#include <stdio.h>

int main(){
	int x, i;
	scanf("%d", &x);
	
	if(x < 2){
		printf("%d bukan bilangan prima", x);
		return 0;
	}
	
	for(i = 2; i < x/2; i++){
		if(x%i == 0){
			printf("%d bukan bilangan prima", x);
			return 0;
		}
	}
	
	printf("%d bilangan prima", x);
}
/*
4. Gunakan pernyaaan if…else untuk menentukan sebuah bilangan masukan adalah bilangan 
prima atau bukan. 
 Input : x 
 Output : x adalah bilangan prima / bukan bilangan prima 

*/
