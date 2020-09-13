#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float t, b, h, S;
	
	printf("Top: ");
	scanf("%f", &t);
	printf("Bottom: ");
	scanf("%f", &b);
	printf("Height: ");
	scanf("%f", &h);
	
	S = (t + b) * h / 2;
	
	printf("Dien tich hinh thang la: %f", S);
	
	return 0;
}
