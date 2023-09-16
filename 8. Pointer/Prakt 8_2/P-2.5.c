#include <stdio.h>

char *nama1 = "AHMAD"; 
char *nama2 = "RIFDA"; 

int main(){ // Menukarkan isi 2 string dengan fasilitas pointer. 
	char *namax; 
	
	puts("SEMULA : "); 
	
	printf("nama1 --> %s\n", nama1); // AHMAD
	printf("nama2 --> %s\n", nama2); // RIFDA
	
	namax = nama1; // namax = AHMAD
	nama1 = nama2; // nama1 = RIFDA
	nama2 = namax; // nama2 = AHMAD
	// karena string itu kumpulan char, jadi ga butuh &
	// kalo gapake tanda &, berarti ga static [hah?]
	
	puts("KINI : "); 
	
	printf("nama1 --> %s\n", nama1); // RIFDA
	printf("nama2 --> %s\n", nama2); // AHMAD
} 
/*
5. Menukarkan isi 2 string dengan fasilitas pointer. 
#include <stdio.h> 
char *nama1 = "AHMAD"; 
char *nama2 = "RIFDA"; 
 
main(){ 
 char *namax; 
 puts("SEMULA : "); 
 printf("nama1 --> %s\n", nama1); 
 printf("nama2 --> %s\n", nama2); 
 namax = nama1; 
 nama1 = nama2; 
 nama2 = namax; 
 puts("KINI : "); 
 printf("nama1 --> %s\n", nama1); 
 printf("nama2 --> %s\n", nama2); 
} 
Analisislah dan jelaskan perbedaan antara aplikasi pada nomor 4 dengan nomor 5 

*/
