#include<stdio.h>
#include<float.h>
int main(){
	float x=2.2;
	printf("x:%f\n",x);
	short y=0x7FFF;
	printf("y:%d\n",y);
	short z=0xFFFF;
	printf("z:%d\n",z);
	unsigned short w=0xFFFF;
	printf("w:%d\n");
	float u=0.177;
	printf("u:%f\n",u);
	printf("%1d\t%1d",DBL_MAX,DBL_MIN);
	return 0;
}
