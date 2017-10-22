#include<stdio.h>
int main(){
	double x;
	scanf("%lf",&x);
    x=(int)(x+0.5);
	printf("%lf\n",x);
	return 0;
}
