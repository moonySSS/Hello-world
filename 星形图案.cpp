#include<stdio.h>
int main(){
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	if((m>=1&&m<=5)&&(n>=1&&n<=5)){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) printf("--**-**--"); printf("\n");
		for(int j=0;j<n;j++) printf("-*--*--*-"); printf("\n");
		for(int j=0;j<n;j++) printf("-*-----*-"); printf("\n");
		for(int j=0;j<n;j++) printf("--*---*--"); printf("\n");
		for(int j=0;j<n;j++) printf("---*-*---"); printf("\n");
		for(int j=0;j<n;j++) printf("----*----"); printf("\n");
	}
	printf("\n");
}
    else printf("Input Error\n");
	return 0;
}
