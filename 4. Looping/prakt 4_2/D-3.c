#include <stdio.h>

int main(){
	int bil, hasil = 0, i = 0, minn, max;
	float ratarata;
	char karakter;
	
	do{
		printf("\nMasukkan bilangan ke-%d : ", i+1);
		scanf("%d", &bil);
		fflush(stdin); // PERLU
		
		printf("Mau memasukkan data lagi [y/t] ? ");
		karakter = getchar();
		fflush(stdin);
		
		// ke-1
		if(i == 0){
			max = bil;
			minn = bil;
		}
		
		if(bil > max){ // max
			max = bil;
		}else if(bil < minn){ // min
			minn = bil;
		}
		
		hasil += bil;
		i++;
	}while(karakter != 't');
	
	ratarata = hasil/i;
	
	printf("\nTotal bilangan = %d\n", hasil);
	printf("Rata-rata : %.2f\n", ratarata);
	printf("Maksimum : %d\n", max);
	printf("Minimum : %d\n", minn);
}
/*
3. Pada program no 2 tambahkan rata-rata, maksimum dan minimum dari angka yang 
dimasukkan. 
*/
