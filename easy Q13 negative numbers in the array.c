#include<stdio.h>
int main(){
	int i,count=0;
	int arr[]={12,-19,6,7,-23,-98};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++){
		if(arr[i]<0){
			count++;
		}
	}
	printf("number of negative numbers in the array=%d",count);
	return 0;
}
