#include<stdio.h>
int main(){
	double a,b,c,t;
	printf("������a,b,c��ֵ\n"); 
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a>b){
		t=a;a=b;b=t;
	}
	if(b>c){
		t=b;b=c;c=t;
	}
	if(a>b){
		t=a;a=b;b=t;
	}
	printf("%lf %lf %lf",a,b,c);
	return 0;
}
