#include<stdio.h>
#include<math.h> 
int main(){
	double a;
	double b;
	printf("������a,b��ֵ\n");
	scanf("%lf%lf",&a,&b);
	if(fabs(a - b)<1e-6){
	printf("yes");
}
	else {
		printf("no");
	}
    return 0;
}
