#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		while(x!=1){
		for(int i=2;i<=x;i++){
			int yu;
			yu=x%i;
	        if(yu==0){
	        	x=x/i;
	        	if(x==1){
	        		printf("%d",i);
	        		break;
				}
				else{
					printf("%d*",i);
					break;
				}
			}
			else {
			continue;
		}
		} 
    }
    printf("\n");
	}
	return 0;
}
