#include<stdio.h>
int main(){
	char n;
	scanf("%c",&n);
	if(n>='A'&&n<='Z'){
	n=n+32;
	printf("%c\n",n);}
    if(n>='a'&&n<='z'){
    	n=n-32;
    	printf("%c\n",n);
	}
	else
	printf("error\n");
	return 0;
} 
