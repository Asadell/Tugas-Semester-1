#include <stdio.h>

void demo(void); 

main() 
{ 
 int i=0; 
 
 while(i < 3) { 
 demo(); 
 i++; 
 } 
} 

void demo(void) 
{ 
 auto int var_auto = 0; 
 static int var_static = 0; 
 
 printf("auto = %d, static = %d\n", 
 var_auto, var_static); 
 ++var_auto; 
 ++var_static; 
}

/*
4. Trace secara manual semua program di bawah ini baris per barisnya, dan tampilkan 
nilai semua variabel pada setiap baris prosesnya. Selain itu, tebaklah tampilkan 
keluaran programnya 

(b)
void demo(void); 
main() 
{ 
 int i=0; 
 
 while(i < 3) { 
 demo(); 
 i++; 
 } 
} 
void demo(void) 
{ 
 auto int var_auto = 0; 
 static int var_static = 0; 
 
 printf("auto = %d, static = %d\n", 
 var_auto, var_static); 
 ++var_auto; 
 ++var_static; 
}



tabel
  |  i  |  var_auto  |  b  |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
  |     |            |     |
*/
