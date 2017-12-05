#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],b[1000],c[1000],d[1000];
	scanf("%s",a);
	scanf("%s",b);
	int min,len=0;
	if(strlen(a)<strlen(b)) min=strlen(a);
	else min=strlen(b);
	for(int i=0;i<min;i++){
	    if(a[strlen(a)-1-i]==b[strlen(b)-1-i]){
	    	c[len]=a[strlen(a)-1-i];
			len++;
		}
		else break; 
	}
	if(len==0) printf("null\n");
	else{
		for(int j=0;j<strlen(c);j++){
			d[j]=c[strlen(c)-1-j];
		}
		for(int k=0;k<strlen(d);k++){
			printf("%c",d[k]);
		}
		printf("\n");
	}
	return 0;
} 
