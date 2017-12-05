#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int a[10001],ans[1001];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
  }
    for(int i=0;i<n-1;i++){
    ans[i]=fabs(a[i]-a[i+1]); 
    for(int i=0;i<n-2;i++)
      for(int j=i+1;j<n-1;j++){
    	if(ans[i]<ans[j]){
    		int t=ans[i];
    		ans[i]=ans[j];
    		ans[j]=t;
		}
	}
	printf("%d\n",ans[0]);
    return 0;
  }
}
