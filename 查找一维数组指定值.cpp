#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d\n",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int t;
	scanf("%d",&t);
	for(int i=0;i<n;i++){
		if(a[i]==t){
			printf("%d ",i);
		}
	}
	printf("\n");
    return 0;
}
