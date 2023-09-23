#include <stdio.h>

char *nama_bulan(int n);

main(){ 
 int bl; 
 char *pkar; 
 
 printf("Bulan 1..12 : "); 
 scanf("%d", &bl); 			// masukkan inputan
 
 pkar = nama_bulan(bl); 	// panggil fungsi
 
 printf("Bulan ke-%d adalah %s\n", bl, pkar); 
} 

char *nama_bulan(int n){ 
 static char *bulan[] =			// harus ada [] nya, kalo pointer lokal mau direturn WAJIB pake static
 { 
 	"Kode bulan salah", 
 	"Januari", 
 	"Februari", 
 	"Maret", 
 	"April", 
 	"Mei", 
 	"Juni", 
 	"Juli", 
 	"Agustus", 
 	"September", 
 	"Oktober", 
 	"November", 
 	"Desember" 
 }; 
 
 return ((n<1||n>12) ? bulan[0] : bulan[n]); // memilah
}
/*
2. Fungsi dengan keluaran berupa pointer yang menunjuk string. 
#include <stdio.h> 
char *nama_bulan(int n); 
main(){ 
 int bl; 
 char *pkar; 
 
 printf("Bulan 1..12 : "); 
 scanf("%d", &bl); 
 pkar = nama_bulan(bl); 
 printf("Bulan ke-%d adalah %s\n", bl, pkar); 
} 
char *nama_bulan(int n){ 
 static char *bulan[] = 
 { 
 "Kode bulan salah", 
 "Januari", 
 "Februari", 
 "Maret", 
 "April", 
 "Mei", 
 "Juni", 
 "Juli", 
 "Agustus", 
 "September", 
 "Oktober", 
 "November", 
 "Desember" 
 }; 
 return ((n<1||n>12) ? bulan[0] : bulan[n]); 
}

*/
