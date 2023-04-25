#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5,67};
	int n=sizeof(arr)/sizeof(arr[0]);
	int search=5;
	int i,found=0;
	printf("array of elements:");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
		
	}
	for(i=0;i<n;i++){
		if(arr[i]==search){
			printf("\n%d is found at position %d",search,i+1);
			found=1;
			break;
		}
	}
	if(found==0){
		printf("\n%d is not found in the array",search);
	}
	return 0;
}
