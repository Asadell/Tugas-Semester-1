#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, d, akar1, akar2;
	
	puts("Program untuk mencari nilai diskriminan (ax^2 + bx + c = 0)");
	puts("Masukkan nilai a b c");
	scanf("%f %f %f", &a, &b, &c);
	
	// menghitung diskriminan
	d = b*b - 4 * a * c;
	
	if(d == 0){
		akar1 = -b /(2 * a);
		akar2 = akar1;
	}else if(d > 0){
		akar1 = (-b + sqrt(d)) / (2 * a);
		akar2 = (-b - sqrt(d)) / (2 * a);
	}else if(d < 0){
		akar1 = (-b / 2*a) + (sqrt(-d) / (2 * a));
		akar2 = (-b / 2*a) + (sqrt(-d) / (2 * a));
	}
	
	printf("\nMaka akar akar dari %.1fx^2 + %.1fx + %.1f = 0 adalah\n", a, b, c);
	printf("x1 = %.1f atau x2 = %.1f\n", akar1, akar2);
}
/*
3. Buatlah program untuk menghitung diskriminan dan mencari akar-akar dari persamaan kuadrat : ax2 + bx + c = 0 , 
dengan ketentuan sbb :
D = b2 - 4ac
• Jika D = 0 , maka terdapat 2 akar real yang kembar, yaitu : x1 = x2 = -b / 2a
• Jika D > 0 , maka terdapat 2 akar real yang berlainan, yaitu : 
x1 = (-b + sqrt(D)) / 2a
x2 = (-b - sqrt(D)) / 2a
• Jika D < 0 , maka terdapat 2 akar imaginair yang berlainan, yaitu : 
x1 = -b / 2a + (sqrt(-D) / 2a) i
x2 = -b / 2a - (sqrt(-D) / 2a) i
Input : a, b, c (float)
Output : Nilai Diskriminan serta nilai akar-akar persamaan tsb (x1& x2).
Petunjuk : 
- untuk mencari akar dari x, gunakan : sqrt(x) yang didefinisikan pada <math.h>.
- gunakan else if
*/
