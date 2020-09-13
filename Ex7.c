#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char C;
	
	printf("Ban muon tinh chu vi va dien tich hinh(t = tron, v = vuong, c = chu nhat)? ");
	scanf("%c", &C);

		switch(C){
		

		case 't':{
			
			float r, Pi, P, S;	
				printf("\nXin moi nhap ban kinh hinh tron: ");
				scanf("%f", &r);
			
				Pi = 3.14159;
				P = 2 * r * Pi;
				S = r * r * Pi;
			
				printf("\nChu vi cua hinh tron la: %f", P);
				printf("\nDien tich cua hinh tron la: %f", S);
			
				break;
			}
			
		case 'v':{
				
			float a, P, S;
				
				printf("\nXin moi nhap canh cua hinh vuong: ");
				scanf("%f", &a);
				
				P = a * 4;
				S = a * a;
			
				printf("\nChu vi cua hinh vuong se la: %f", P);
				printf("\nDien tich cua hinh vuong se la: %f", S);
			
				break;
			}
			
		case 'c':{
				
				float a, b, P, S;
				
				printf("\nXin moi nhap 2 canh cua hinh chu nhat(a b): ");
				scanf("%f %f", &a, &b);
				
				P = 2 * (a + b);
				S = a * b;
				
				printf("\nChu vi hinh chu nhat se la: %f", P);
				printf("\nDien tich hinh chu nhat se la: %f", S);
				
				break;
			}
		default:{
				
				printf("Khong hop le, yeu cau nhap t, v hoac c !");
				
				break;
			}
		}			
	
	return 0;
}
