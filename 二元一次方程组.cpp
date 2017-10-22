#include<stdio.h>
int main(){
	double a,b,c,d,e,f,x,y;
	printf("请输入a,b,c,d,e,f的值\n");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	if(a*e-b*d!=0)
	{
		x=(c*e-b*f)/(a*e-b*d);
		y=(a*f-c*d)/(a*e-b*d);
printf("x:%lf\n y:%lf\n",x,y);
	}
else if(a*f==c*d||b*f==c*e){
	printf("无穷个解\n");
}
else{
	printf("无解\n");
}
	return 0;
}
