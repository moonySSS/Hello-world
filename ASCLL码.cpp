#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char a[100];
	while(fgets(a,100,stdin)!=NULL){
		for (int i=0;i < strlen(a) -1;i++)
		printf("¶ÔÓ¦ASCLLÂëÎª %d",a[i]);
		printf("\n");
	}
	return 0;
}
