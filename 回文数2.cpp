#include<stdio.h>
#include<string.h>
int main(){
	char bef[1000],aft[1000];
	scanf("%s",bef);
	for(int i=0;i<strlen(bef);i++){
		aft[strlen(bef)-1-i]=bef[i];
	}
	if(strcmp(bef,aft)==0||strlen(bef)==1)
	printf("Yes\n");
	else printf("No\n");
	return 0;
} 
