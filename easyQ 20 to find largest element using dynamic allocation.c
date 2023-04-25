#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*arr,i,max;
	printf("input total number of elements(1 to 100):");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL){
		printf("memory allocation failed!");
		return 0;
	}
	for(i=0;i<n;i++){
		printf("number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("the largest element in the array is:%d",max);
	free(arr);
	return 0;
}

