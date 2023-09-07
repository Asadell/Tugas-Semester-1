#include <stdio.h>

int main(){
	int i, j;
	int nilai[4][3] = {{81, 90, 62}, {50, 83, 87}, {89, 55, 65}, {77, 70, 92}};
	float result;
	
//	printf("\n| %4s | %10s | %10s | %10s | %10s |\n", "No.", "Nama Mhs", "BAHASA", "MATEMATIKA", "DIGITAL");
	puts("-----------------------------------------------");
	printf("| %4s | %10s | %10s | %10s |\n", "No.", "BAHASA", "MATEMATIKA", "DIGITAL");
	puts("-----------------------------------------------");
	
	for(i = 0; i < 4; i++){
		printf("| %4d ", i+1);
		
		for(j = 0; j < 3; j++){
			printf("| %10d ", nilai[i][j]);
			if(j == 2) printf("|");
		}
		puts("");
	}
	puts("-----------------------------------------------");
	
	puts("\n\n------------------------");
	printf("| %7s | %10s |\n", "No. Mhs", "Rata-rata");
	puts("------------------------");
	
	for(i = 0; i < 4; i++){
		result = 0;
		
		for(j = 0; j < 3; j++){
			result += nilai[i][j];
		}
		
		result /= 3;
		printf("| %7d | %10.2f |\n", i+1, result);
	}
	puts("------------------------");
}
