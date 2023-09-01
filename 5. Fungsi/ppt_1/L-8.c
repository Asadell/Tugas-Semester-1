#include <stdio.h>

int HitungPangkat(int m, int n){
	if(n == 0){
		return 1;
	}else{
		return m * HitungPangkat(m, n - 1);
	}
}

int main(){
	int m, n, result;
	
	printf("\nMasukkan bilangan : ");
	scanf("%d", &m);
	result = m;
	
	printf("\nMasukkan pangkat : ");
	scanf("%d", &n);
	
	// hehe lupa
//	while(--n){
//		result *= m;
//	}

	result = HitungPangkat(m, n);
	
	printf("\nMaka hasilnya adalah %d", result);
}
/*
8. Dengan fungsi, buat program menghitung pangkat n dari sebuah bilangan. Input adalah bilangan itu 
sendiri (m) dan pangkatnya (n), sedangkan sebagai output adalah pangkat n dari bilangan m (mn
). 
*/
