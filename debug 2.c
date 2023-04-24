#include<stdio.h> 
int main(){
	char a;
	int i,j,n;
	printf("enter character to be printed:");
	scanf("%c",&a);
	printf("\n max number of times to  printed:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c",a);
			
		}
		printf("\n");
		
	}
	return 0;
}
