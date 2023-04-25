#include<stdio.h>
int main(){
	int m,n,i;
	printf("enter the number to print the multiplication table");
	scanf("%d",&m);
	printf("enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d x %d =%d\n",m,i,m*i);
	}
	return 0;
}
