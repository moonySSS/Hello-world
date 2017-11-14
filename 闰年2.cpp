#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int a;
	scanf("%d",&a);
	if(a % 100 == 0){
		if(a % 400 == 0){
			printf("该年是闰年\n");
	    }else{ 
			printf("该年不是闰年\n");
	    } 
	}else{
		if(a % 4 == 0){
			printf("该年是闰年\n");
		}else{
			printf("该年不是闰年\n");
		}
	}
	
	return 0;
} 
