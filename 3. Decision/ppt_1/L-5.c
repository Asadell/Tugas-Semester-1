#include <stdio.h>

int main(){
	int tahun;
	
	scanf("%d", &tahun);
	
	if(((tahun%4 == 0) || (tahun%400 == 0)) && (tahun%100 != 0)){
		puts("kabisat");
		return 0;
	}
	
	puts("bukan kabisat");
}
/*
5. Gunakan pernyataan if…else untuk membuat program yang menerima apakah 
sebuah tahun yang diinputkan adalah tahun kabisat atau bukan. 
Input : 2010
Output : Bukan kabisat
Catatan : Tahun kabisat adalah tahun yang merupakan kelipatan 4, kelipatan 400, 
bukan kelipatan 100 atau selainnya.
*/
