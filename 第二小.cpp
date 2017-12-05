#include<stdio.h>


int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m;
		scanf("%d\f",&m);
		int a[m];
		for(int i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		if(m<=1) printf("ERROR\n");
		else {
			for(int i=0;i<m;i++){
				for(int j=i;j<m;j++){
					if(a[i]>a[j]){
						int t;
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
	    	int x=0;
	    	int y=0;
		    for(int i=0;i<(m-1);i++){
		    	y=a[i]-a[i+1];
		    	if(y==0) x=x+1;
		    	else break;
				}
			if(x==(m-1)) printf("ERROR\n");
			else{
			for(int i=0;i<(m-1);i++){
        	if(a[i]<a[i+1]){
			printf("%d\n",a[i+1]);
			break;
    }
			}
	}

		}
	}
	return 0;
}

