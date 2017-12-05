#include<stdio.h>
int main(){
	int m,n;
	scanf("%d",&m);
	while(m!=0){
		n=m%10;
		m=m/10;
		printf("%d",n);
	}
	printf("\n");
	return 0;
}
