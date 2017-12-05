#include<stdio.h>
int main(){
	int a[10], b[10];
	int n;
	scanf("%d",&n);
	n = n % 10;
	for(int i = 0; i < 10; i++){
		scanf("%d",&a[i]);
		b[i] = a[i];
    }
	for(int i = 0; i < 10; i++){
		if(i + n <= 9){
			a[i]=a[i + n];
		}
		else{
		    a[i]=b[i + n - 10];
	    }
    }
	for(int i = 0; i < 10; i++){
	    printf("%d ",a[i]);
    }    
    printf("\n");
	return 0;
}
