#include <stdio.h>

int prima(int n){
	int i;
	
	for(i = 2; i <= n/2; i++){
		if(n%i == 0) return 0; // tidak prima
	}
	
	return 1; // prima
}

int main(){
	int n, hasil;
	
	printf("\nMasukkan bilangan yg ingin dicek prima : ");
	scanf("%d", &n);
	
	if(prima(n)){
		printf("\nBilangan %d termasuk bilangan prima", n);
	}else{
		printf("\nBilangan %d tidak termasuk bilangan prima", n);
	}
}
/*
3. Buatlah fungsi prima(), yang memberikan nilai balik 1 bila bilangan yang 
dimasukkan adalah prima, dan 0 bila bukan bilangan prima. 
*/
