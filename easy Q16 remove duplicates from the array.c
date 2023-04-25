#include<stdio.h>
int main(){
	int arr[]={12,12,12,12,12,34,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j,k;
	printf("original array:");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	for(i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			for(j=i+1;i<n;j++){
				arr[j]=arr[j+1];
			}
			n--;
			i--;
		}
	}
	printf("\narray with duplicates removed:");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	
	return 0;
}
