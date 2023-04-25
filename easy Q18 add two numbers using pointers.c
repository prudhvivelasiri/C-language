#include<stdio.h>
void add(int*a,int*b,int*sum);
int main(){
	int num1,num2,sum;
	printf("enter the first number");
	scanf("%d",&num1);
	printf("enter the second number");
	scanf("%d",&num2);
	add(&num1,&num2,&sum);
	printf("the sum of %d and %d is %d",num1,num2,sum);
	return 0;
}
void add(int*a,int*b,int*sum){
	*sum=*a+*b;
}
