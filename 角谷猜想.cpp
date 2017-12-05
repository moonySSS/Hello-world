#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x,m=0;
		scanf("%d",&x);
		if(x==1) printf("0\n");
		else{int bushu=0;
			while(x!=1){
				int mod;
				mod=x%2;
				if(mod==0){
					x=x/2;
					bushu=bushu+1;
				}
				else{
					x=(3*x+1)/2;
					bushu=bushu+1;
				}
			}
			printf("%d\n",bushu);
		}
		
	}
	return 0;
}
