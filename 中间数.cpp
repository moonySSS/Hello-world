#include<stdio.h>
int main(){
	int n,p,q;
	scanf("%d\n",&n);
	int a[n];
	for(int i=0;i<n;i++){
	   scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
    	p=0; q=0;
       for(int j=0;j<n;j++){
          if (a[i]<a[j]){
            p=p+1;		  
		  }
		  if (a[i]>a[j]){
		    q=q+1;
		  }
        }
        if(p==q) {
        	printf("%d",a[i]);
        	break;
		}
		else continue;
    }
    if(p!=q) printf("-1");
	return 0;
}
