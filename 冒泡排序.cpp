#include<stdio.h>
int a[1000];
int main(){

	int n, i, j, t, f;
	scanf("%d",&n);    //�������ָ��� 
	for( i = 0; i < n; i++ ){
		scanf("%d",&a[i]);   //����������� 
	}
	for( j = 0; j < n; j++ ){
		for( i = 0; i < n; i++ ){
			if( i + 1 < n && a[i + 1] < a[i] ){
				t = a[i + 1];
				a[i + 1] = a[i];
				a[i] = t;
			}
			for( int k = 0; k < n - 1; k++ ){
				f = 0;
				if( a[k] < a[k + 1] ){
					f++;
				}
			}
			if( f == n - 1 ){
				break;
			}
		}
		for( i = 0; i < n; i++ ){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	
	return 0;
}
