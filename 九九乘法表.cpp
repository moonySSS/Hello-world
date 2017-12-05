#include<stdio.h>
int main(){
	for(int i=1;i<10;i++){
		int j=1;
		while(i>=j){
			int z;
			z=i*j;
			printf("%d*%d= %d ",i,j,z);
			j++; 
		}
		printf("\n");
	}
	return 0;
}
