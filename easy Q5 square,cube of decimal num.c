#include<stdio.h>
int main(){
	double num,square,cube;
	printf("enter a decimal number");
	scanf("%lf",&num);
	square=num*num;
	 cube= num* num* num;
	printf("square number: %lf\n",square);
	printf("cube number: %lf\n",cube);
	return 0;
}
