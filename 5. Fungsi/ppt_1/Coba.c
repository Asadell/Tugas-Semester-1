#include <stdio.h>

int i = 9;

void cetak(){
	i +=5;
	printf("_%d", i);
}

int main(){
	i;
	i +=1;
	printf("\n%d\n", i);
	cetak();
}
