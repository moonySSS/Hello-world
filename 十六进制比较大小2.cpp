#include<stdio.h>
int main(){
	int x,y;
	char a[6],b[6];
    scanf("%s",a);
    scanf("%s",b);
    for(int i=2;i<6;i++){
    	if(a[i]>='a'&&a[i] <='f') a[i]=a[i]-'a'+10;
    	if(a[i]>='0'&&a[i] <='9') a[i]=a[i]-'0'; 
	}
	x=a[5]+16*a[4]+16*16*a[3]+16*16*16*a[2];
     for(int i=2;i<6;i++){
    	if(b[i]>='a'&&b[i] <='f') b[i]=b[i]-'a'+10;
    	if(b[i]>='0'&&b[i] <='9') b[i]=b[i]-'0'; 
	}
	y=b[5]+16*b[4]+16*16*b[3]+16*16*16*b[2];
	if(x>y) printf("1\n");
	if(x==y) printf("0\n");
	if(x<y) printf("-1\na");
	return 0;
} 
