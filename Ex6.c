#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, sum, avg;
	
	printf("Nhap diem toan: ");
	scanf("%f", &a);
	printf("Nhap diem ly: ");
	scanf("%f", &b);
	printf("Nhap diem hoa: ");
	scanf("%f", &c);
	
	sum = a + b + c;
	avg = sum / 3;
	
	printf("Tong diem: %.2f", sum);
	printf("\nDiem trung binh: %.2f", avg);
	
	return 0;
}
