#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int k,j=0,b;
		int a[10000];
		int x=0;
		scanf("%d",&k);
	    b=k;
		for(int i=2;i<k;i++){
			b=b%i;
			if(b!=0) {
			x=x+1;
			continue;
	}
			else break;
		}
		if(x==(k-2)) printf("%d",k);
		else{  int u,y,z,p=0; 
		       u=k;
			for(int i=2;i<u;i++){
				y=u%i;
				u=u/i;
				if(y==0){
					a[j]=i;
					j=j+1;
				}
				else {
				p=p+1;			
			}
			}
					a[j]=u;	
		}
		for(int i=0;i<(j-1);i++){
		printf("%d",a[i]);
		printf("*");
    }
 	    printf("%d",a[j]);
 	}
}
	return 0;
}
