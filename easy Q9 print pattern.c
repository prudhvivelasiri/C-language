#include<stdio.h>
int main(){
	int rows,i,j,k;
	printf("enter the number of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(k=1;k<=rows-i;k++){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
