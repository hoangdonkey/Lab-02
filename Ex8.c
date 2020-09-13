#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("*========Kich thuoc cua cac kieu du lieu========*");
	
	printf("\n\nKieu int: %d Byte", sizeof(int));
	printf("\nSo nguyen: 15");
	
	printf("\n\nKieu float: %d Byte", sizeof(float));
	printf("\nSo thuc kieu float: 4.123456");
	
	printf("\n\nKieu double: %d Byte", sizeof(double));
	printf("\nSo thuc kieu double: 7.1234567890");
	
	printf("\n\nKieu char: %d Byte", sizeof(char));
	printf("\nKy tu: B");
	
	printf("\n\nKieu long int: %d Byte", sizeof(long int));
	printf("\nSo nguyen: 134");
	
	printf("\n\nKieu long double: %d Byte", sizeof(long double));
	printf("\nSo thuc kieu long double: 77.123523423456783425369");
	
	printf("\n==================================================");
	printf("\n\nBam phim bat ky de dong chuong trinh");
	
	return 0;
}
