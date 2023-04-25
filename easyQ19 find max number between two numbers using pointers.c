#include<stdio.h>
void max(int*a,int*b,int*max);
int main(){
	int num1,num2,max_num;
	printf("enter the first number");
	scanf("%d",&num1);
	printf("enter the second number");
	scanf("%d",&num2);
	max(&num1,&num2,&max_num);
	printf("the maximum number between %d and %d are %d",num1,num2,max_num);
	return 0;
}
void max(int*a,int*b,int*max){
	if(*a>*b){
		*max=*a;
	}else{
		*max=*b;
	}
}
