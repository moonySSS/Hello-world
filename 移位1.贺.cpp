#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int a[10], ans[10];
	int x, p = 0;
	scanf("%d",&x);
	x = x % 10;
	for(int i = 0; i < 10; i++) scanf("%d",&a[i]);
	for(int i = 0; i < 10 - x; i++) ans[i] = a[i + x];
	for(int i = 10 - x; i < 10; i++) ans[i] = a[p++];
	for(int i = 0; i < 10; i++) printf("%d ",ans[i]);
	printf("\n");
	
	return 0;
}
