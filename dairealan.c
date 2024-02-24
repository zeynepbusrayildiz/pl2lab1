#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

float circle(const int r){
	float area;
	area=pi*r*r;
	return area;
}

int main() {
	int r;
	printf("Please enter the radius size:\n");
	scanf("%d",&r);
	float alan=circle(r);
	printf("The area of the circle is = %.2f",alan);
	return 0;
}
