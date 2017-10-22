#include<stdio.h>
#include<math.h>
int main(){
	double x;
	int a;
	double b;
	scanf("%lf",&x);
	if(x>0){
	    a=floor(x); 
		b=x-a;
printf("a:%d\n b:%lf\n",a,b);
	}
else {
	a=ceil(x);
	b=a-x;
printf("a:%d\nb:%lf\n",a,b);
}
	return 0;
}
