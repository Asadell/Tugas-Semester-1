#include <stdio.h>
//  Muhammad Satrio Asadel
//  3123600056
//  1 D4 IT B

int main(){
	int id, unit, tambahan = 0, total;
	
	puts("\nInput:");
	
	printf("id Customer : ");
	scanf("%d", &id);
	
	printf("Unit pemakaian : ");
	scanf("%d", &unit);
	
	// OUTPUT
	puts("\nOutput:");
	printf("No ID Customer : %d\n", id);
	printf("Unit Pemakaian : %d\n\n", unit);
	
	if(unit < 200){
		total = unit * 1200;
		printf("Harga @Rp. 1.200,- per unit : Rp. %d,-", total);
	}else if(unit <= 399){
		total = unit * 1500;
		printf("Harga @Rp. 1.500,- per unit : Rp. %d,-", total);
	}else if(unit <= 599){
		total = unit * 1800;
		printf("Harga @Rp. 1.800,- per unit : Rp. %d,-", total);
	}else { // >= 600
		total = unit * 2000;
		printf("Harga @Rp. 2.000,- per unit : Rp. %d,-", total);
	}
	
	if(total > 400000){ // 400_000
		tambahan = total * 0.15;
	}
	
	printf("\nBiaya Tambahan : Rp. %d,-\n\n", tambahan);
	
	if(total < 100000){
		total = 100000;
	}
	
	printf("Total tagihan customer : Rp. %d,-\n", total + tambahan);
}
