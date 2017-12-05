#include<stdio.h>
int main(){
	int x;
	char a[6];
    scanf("%s",a);
    for(int i=2;i<6;i++){
    	if(a[i]>='a'&&a[i] <='f') a[i]=a[i]-'a'+10;
    	if(a[i]>='0'&&a[i] <='9') a[i]=a[i]-'0'; 
	}
	x=a[5]+16*a[4]+16*16*a[3]+16*16*16*a[2];
	printf("%d\n",x);
	return 0;
}
