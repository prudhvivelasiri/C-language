#include<stdio.h>
int main(){
	int arr[]={12,1,2,3,4,5,67,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,temp;
	printf("orginal array:");
	for(i=0;i<n;i++){
		printf("&d",arr[i]);
	}
	for(i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
		
	}
	printf("\n reversed array:");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
