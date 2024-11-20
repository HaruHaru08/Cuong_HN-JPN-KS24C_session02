#include <stdio.h>

int main(){
	float pi = 3.14;
	float radius = 5;
	float perimeter = 2 * pi * radius;
	float acreage = pi * radius * radius;
	printf("Chu vi hinh tron la: %.2f \n",perimeter);
	printf("Dien tich hinh tron la: %.2f \n ",acreage);
	return 0;
}