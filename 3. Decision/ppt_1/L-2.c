#include <stdio.h>

int main(){
	char karakter;
	scanf("%c", &karakter);
	
	if(karakter=='a' || karakter=='A' || karakter=='i' || karakter=='I' || karakter=='u' || karakter=='U' || karakter=='e' || karakter=='E' || karakter=='o' || karakter=='O'){
		puts("vokal");
		return 0;
	}
	
	puts("konsonan");
	
}
/*
2. Dengan menggunakan if ... else dan operator logika OR buat program untuk mendefinisikan 
sebuah karakter yang diinputkan adalah vokal atau konsonan.
*/
