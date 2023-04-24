#include<stdio.h>
int main(){
 char str[100];
 int i,lower_case,upper_case,digits,special;
 i=lower_case=upper_case=digits=special=0;
 printf("enter any string :");
 gets(str);
 while (str[i] !='\0'){
if((str[i]>='a' && str[i]<='z')){
lower_case++;
	 }
else if((str[i]>='A' && str[i]<= 'Z')){
upper_case++;
	 	
	 }
else if(str[i]>='0' && str[i]<='9'){
	 
digits ++;
}
else 
special++;
i++;
}

printf(" \n number of lower_case in the string =%d",lower_case);
printf("\n number of upper_case in the string =%d",upper_case);
printf("\n number of digits in the string= %d",digits);
printf("\n number of special characters in the string = %d",special);
return 0;
}
