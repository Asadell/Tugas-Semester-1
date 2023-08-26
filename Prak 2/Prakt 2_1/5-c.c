#include <stdio.h>

int main(){
	int y, b, x, c, z, a;
	
	b = 9;
	x = 3;
	c = 6;
	z = 7;
	a = 3;
	
	y = b * x * x + 0.5 * x - c; // jenis - dan – berbeda :)
	printf("Dengan rumus  y = bx^2 + 0,5x - c\nMaka didapaktkan hasilnya ialah %d\n\n", y);
	
	y = 0.3 * x * z / (2 * a);
	printf("Dengan rumus  y = 0.3 * x * z / (2 * a)\nMaka didapaktkan hasilnya ialah %d\n\n", y);
	
}
