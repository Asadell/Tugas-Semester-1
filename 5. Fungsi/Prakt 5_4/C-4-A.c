#include <stdio.h>

int OddEvenTest(int); 

int main() 
{ 
 int a, hasil; 
 a = 5; 
 hasil = OddEvenTest(a); 
 printf("a=%d; hasil=%d\n",a,hasil); 
} 

OddEvenTest(int b) 
{ 
 int a; 
 printf("__%d__%d\n", a, b);
 
 a = b % 2; 
 return a; 
}

/*
4. Trace secara manual semua program di bawah ini baris per barisnya, dan tampilkan 
nilai semua variabel pada setiap baris prosesnya. Selain itu, tebaklah tampilkan 
keluaran programnya 

(a)
int OddEvenTest(int); 
main() 
{ 
 int a, hasil; 
 a = 5; 
 hasil = OddEvenTest(a); 
 printf("a=%d; hasil=%d\n",a,hasil); 
} 
OddEvenTest(int b) 
{ 
 int a; 
 
 a = b % 2; 
 return a; 
}

tabel
  |  a  |  hasil  |  b  |
  |     |         |     |
  |     |         |     |
  |     |         |     |
  |     |         |     |
  |     |         |     |
  |     |         |     |
  |     |         |     |
  |     |         |     |
  |     |         |     |
  |     |         |     |
  |     |         |     |
  |     |         |     |
  |     |         |     |

*/
