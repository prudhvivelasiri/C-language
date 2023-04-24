#include<stdio.h>
int main(){
	int p=60;
	int q=70;
	int r=3;
	printf("numbers are =");
	for(int i=p;i<=q;i++){
		int n =i;
		while (n!=0){
			int digit=n%10;
			if(digit == r){
				goto skip;
			}
			n /= 10;
			
		}
		printf("%d",i);
		skip:
			continue;
	}
	return 0;
}
