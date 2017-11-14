#include<stdio.h>
int a[1000];
int main(){

	int n, i, j, t, f;
	scanf("%d",&n);   //输入有几个数进行排序 
	for( i = 0; i < n; i++ ){
		scanf("%d",&a[i]);
	}
	printf("%d \n",a[0]);
	for( j = 1; j < n; j++ ){
		for( i = j; i > 0 ; i-- ){
			f = i - 1;
			if( a[i] < a[f] ){
				t = a[f];
				a[f] = a[i];
				a[i] = t;
			}else{
				break;
			}
		}
		for( i = 0; i <= j; i++ ){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}
