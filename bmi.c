#include <stdio.h>
#include <stdlib.h>

int bmi(float a, float b){
	float x;
	x=b/(a*a);
	if(x<=18)
	return 1;
	else if(x<=25)
	return 2;
	else if(x<=30)
	return 3;
	else return 4;
}

int main(){
	int o;
	float boy, kilo;
	printf("Please enter height:");
	scanf("%f",&boy);
	printf("Please enter weight:");
	scanf("%f",&kilo);
	o=bmi(boy,kilo);
	if(o==1) printf("zayif");
	else if(o==2) printf("normal");
	else if(o==3) printf("kilolu");
	else printf("obez");
	return 0;
}
