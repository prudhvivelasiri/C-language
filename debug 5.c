#include<stdio.h>
int main(){
	char word[100];
	int i,alphabets=0,numbers=0,spcl_char=0;
	printf("enter a statement");
	scanf("%s",word);
	while(word[i]!=0){
		if((word[i]>='a' && word[i]<='z') ||(word[i]>='A'&& word[i]<='Z')){
			alphabets ++;
			
			
		}
		else if(word[i]>='0' && word[i]<='9'){
			numbers ++;
			
		}
		else if(word[i]!=' '){
			spcl_char++;
		}
		i++;
		
	}
	printf("\n no of special characters in this word=%d",spcl_char);
	return 0;
}
