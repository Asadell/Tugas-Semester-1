#include <stdio.h>

int main(){
	
	/*
	C.1. Tidak ada yang salah dengan fungsi yang tidak mempunyai nilai return value, 
			karena tujuan pembuatan fungsi berbeda-beda, jadi apabila membuat fungsi tapi 
			tidak perlu mengeluarkan hasil dengan format tipe data tertentu, 
			atau hanya meng-outputnya printf saja atau memakai pass by reference
			wajar saja jika tidak memakai fungsi return value
	
	C.2. untuk 'best practice' nya tidak bagus menulis seperti itu, tapi untuk algoritma
			yang sederhana, return value tetapi tidak diassign ke variabel apapun boleh saja,
			misal seperti ini
			printf("\nHasil akhir = %d", tambah(n));
			tergantung situasi yang mood programmernya, jadi boleh boleh saja
			tapi tidak jika ingin codinganmu bisa cepat dimengerti orang lain
	
	C.3. tentunya akan terjadi 'Compile Time Error'
			karena void kata kunci menentukan bahwa fungsi tidak mengembalikan nilai.
			Jadi jika dipaksa untuk mengembalikan nilai, program tidak akan jalan
			
	C.4.A.	kalo sisa baginya ganjil = 1, kalo genap = 0;
	
	C.4.B.	untuk var_auto akan terus 0
			untuk var_static akan terus bertambah (karena dia static, "satu untuk semua")
	
	C.4.C.	
	
	*/
	
	
}
/*
C. PERCOBAAN 
Lakukan percobaan-percobaan untuk bisa menjawab semua pertanyaan di bawah 
ini, analisislah dan tuliskan alasannya 
1. Adakah sesuatu yang salah pada sebuah fungsi yang tidak mempunyai return value ? 
Jelaskan analisismu tentang sebuah fungsi yang tidak memiliki return value! 

2. Apakah yang terjadi jika sebuah fungsi memberikan return value tetapi tidak diassign 
ke variabel apapun ? 

3. Apakah yang terjadi jika sebuah fungsi diassign ke sebuah variabel padahal fungsi 
tersebut tidak memiliki return value ? 
72

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

*/
