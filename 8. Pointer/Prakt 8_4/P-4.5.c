#include <stdio.h>

char *my_strcpy(char dest[], char source[]) { 
	int i = 0; 
 
	while (source[i] != '\0') { 
		dest[i] = source[i]; 
		i++; 
	} 
	
	dest[i] = '\0'; 
	
	return dest; 
}

int main(){
	char strA[80]="A string to be used for demonstration"; 
	char strB[80]; 
 
	my_strcpy(strB, strA); 		// memanggil function untuk mencopy strA ke strB
	
	puts(strB); 				// output strB
}

/*
	perbandingan
	1. 4.5 harus membuat array baru di parameternya, sedangkan 4.4 cukup mereference ke array di main function saja
	2. 4.5 repot harus menginisialisasi variabel untuk index arraynya
	3. 4.5 mereturn array berupa pointer, 4.4 langsung mereturn pointernya
	4. 
*/

/*
5. Bandingkan fungsi my_strcpy di atas dengan fungsi my_strcpy di bawah ini. Berikan 
penjelasan terhadap perbedaan proses dari kedua fungsi tersebut 
 char *my_strcpy(char dest[], char source[]) { 
 int i = 0; 
 while (source[i] != '\0') 
 { 
 dest[i] = source[i]; 
 i++; 
 } 
 dest[i] = '\0'; 
 return dest; 
 }

*/
