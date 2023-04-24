#include<stdio.h>
int main(){
	int num,reverse_num=0;
	printf("enter the number");
	scanf("%d",&num);
	int temp=num;
	while(temp!=0){
		int digit =temp%10;
		reverse_num=reverse_num*10+digit;
		temp =temp /10;
		
		
	}
	printf("reverse number %d",reverse_num);
	return 0;
	
}
