#include<stdio.h>
int main(){
	double a,b,c,d,e,f,x,y;
	printf("������a,b,c,d,e,f��ֵ\n");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	if(a*e-b*d!=0)
	{
		x=(c*e-b*f)/(a*e-b*d);
		y=(a*f-c*d)/(a*e-b*d);
printf("x:%lf\n y:%lf\n",x,y);
	}
else if(a*f==c*d||b*f==c*e){
	printf("�������\n");
}
else{
	printf("�޽�\n");
}
	return 0;
}
