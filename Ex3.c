#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, tong, hieu, tich;
	float thuong;
	
	printf("Nhap so num1: ");
	scanf("%d", &num1);
	printf("Nhap so num2: ");
	scanf("%d", &num2);
	
	tong = num1 + num2;
	hieu = num1 - num2;
	tich = num1 * num2;
	thuong = (float)num1 / (float)num2;
	
	printf("\nTong: %d", tong);
	printf("\nHieu: %d", hieu);
	printf("\nTich: %d", tich);
	printf("\nThuong: %.2f", thuong);
	
	return 0;
}
