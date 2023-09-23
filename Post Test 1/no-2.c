#include <stdio.h>

int main(){
	int result, jam, menit;
	
	printf("\nInput : ");
	scanf("%d jam %d menit", &jam, &menit);
	
	result = (jam * 60) + menit;
	
	printf("Output %d menit", result);
	
}
