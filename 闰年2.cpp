#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int a;
	scanf("%d",&a);
	if(a % 100 == 0){
		if(a % 400 == 0){
			printf("����������\n");
	    }else{ 
			printf("���겻������\n");
	    } 
	}else{
		if(a % 4 == 0){
			printf("����������\n");
		}else{
			printf("���겻������\n");
		}
	}
	
	return 0;
} 
