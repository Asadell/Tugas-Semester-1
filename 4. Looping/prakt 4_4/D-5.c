#include <stdio.h>

int main(){
	int n, i, j, isPrima, temp = 0;
	char karakter;
	
	// =================== D-1 ===================
	new:
	printf("\nMasukkan bilangan n : ");
	scanf("%d", &n);
	fflush(stdin);
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	
	printf("\napakah anda ingin keluar (y/t)?");
	karakter = getchar();
	fflush(stdin);
	
	if(karakter == 't')goto new;
	if(karakter == 'y'){
		puts("Program selesai");
	}
	
	// =================== D-2 ===================
//	do{
//		printf("\nMasukkan bilangan n : ");
//		scanf("%d", &n);
//		fflush(stdin);
//	
//		for(i = 1; i <= n; i++){
//			for(j = 1; j <= n; j++){
//				printf("%d ", i);
//			
//				if(i == j) break;
//			}
//			printf("\n");
//		}
//
//		printf("\napakah anda ingin keluar (y/t)?");
//		karakter = getchar();
//		fflush(stdin);
//	}while(karakter == 'y');
	
	// =================== D-3 ===================
//	do{
//		printf("\nMasukkan bilangan : ");
//		scanf("%d", &n);
//		fflush(stdin);
//	
//		for(i = 2; i <= n; i++){
//			isPrima = 1;
//			for(j = 2; j <= i/2; j++){
//				if(i % j == 0){
//					isPrima = 0;
//					break;
//				}
//			}
//		
//			if(isPrima){
//				printf("%d ", i);
//			}
//		}
//
//		printf("\napakah anda ingin keluar (y/t)?");
//		karakter = getchar();
//		fflush(stdin);
//	}while(karakter == 'y');
	
	// =================== D-4 ===================
//	do{
//		printf("Masukkan bilangan : ");
//		scanf("%d", &n);
//		fflush(stdin);
//	
//		for(i = 1; temp <= n; i++){
//			printf("%d ", temp);
//			
//			temp += i;
//		}
//
//		printf("\napakah anda ingin keluar (y/t)?");
//		karakter = getchar();
//		fflush(stdin);
//	}while(karakter == 'y');	
	
}
/*
5. Pada akhir setiap 4 buah program diatas tambahkan tanyaan “apakah anda ingin 
keluar (y/t)?”, pertanyaan tersebut hanya bisa di jawab dengan huruf ‘y’ (y kecil) 
dan ‘t’(t kecil). Dan akan keluar dari program setelah dijawab dengan ‘y’ (y kecil) 
*/


