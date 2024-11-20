#include <stdio.h>

int main(){
	int length = 6;
	int width = 4;
	int perimeter = (length + width) * 2;
	int acreage = length * width;
	printf("Chu vi hinh chu nhat la: %d \n",perimeter);
	printf("Dien tich hinh chu nhat la: %d \n",acreage);
	return 0;
}