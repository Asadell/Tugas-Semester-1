#include <stdio.h>

void fung_a(void); 
void fung_b(void); 
int x = 20; 
main() 
{ 
 x += 2; 
 fung_a(); 
 fung_a(); 
 printf("\nNilai x dalam main() = %d\n\n",x); 
} 
void fung_a(void) 
{ 
 static x = 5; 
 x++; 
 printf("Nilai x dalam fung_a() = %d\n", x); 
 fung_b(); 
} 
void fung_b(void) 
{ 
 x--; 
 printf("Nilai x dalam fung_b() = %d\n", x); 
}
/*
4. Trace secara manual semua program di bawah ini baris per barisnya, dan tampilkan 
nilai semua variabel pada setiap baris prosesnya. Selain itu, tebaklah tampilkan 
keluaran programnya 

(c)
void fung_a(void); 
void fung_b(void); 
int x = 20; 
main() 
{ 
 x += 2; 
 fung_a(); 
 fung_a(); 
 printf("\nNilai x dalam main() = %d\n\n",x); 
} 
void fung_a(void) 
{ 
 static x = 5; 
 x++; 
 printf("Nilai x dalam fung_a() = %d\n", x); 
 fung_b(); 
} 
void fung_b(void) 
{ 
 x--; 
 printf("Nilai x dalam fung_b() = %d\n", x); 
}



tabel
      |    x    |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
      |         |
*/
