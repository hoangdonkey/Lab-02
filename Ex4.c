#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float C, F;
	
	printf("Nhap do C: ");
	scanf("%f", &C);
	
	F = ((float)9 / (float)5 * C) + 32;
	
	printf("Do F se la: %.1f", F);
	
	return 0;
}
