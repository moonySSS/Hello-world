#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int Max;
		char a[10000],b[10000];
		int c[10000],d[10000],e[10000];
		scanf("%s",a);
		scanf("%s",b); 
		if(strlen(a)<strlen(b)){
			Max=strlen(b);
		}
		else {Max=strlen(a);
	    }
		for(int i=0;i<strlen(a);i++){
			c[i]=a[strlen(a)-1-i]-'0';
		}
		for(int i=strlen(a);i<10000;i++){
			c[i]=0;
		}
        for(int i=0;i<strlen(b);i++){
			d[i]=b[strlen(b)-1-i]-'0';
		}
		for(int i=strlen(b);i<10000;i++){
			d[i]=0;
		}
		for(int i=0;i<10000;i++){
			e[i]=0;
		}
		for(int i=0;i<9999;i++){
            if((e[i]+c[i]+d[i])>=10){
            	e[i]=(e[i]+c[i]+d[i])%10;
            	e[i+1]=e[i+1]+1;
			}
			else{
				e[i]=e[i]+c[i]+d[i];
			}
	}
        int j=9999;  
        while(e[j]==0) j--; 
        if(j<0) printf("0");  
        else  
        {  
            for(; j>=0; j--)  
                printf("%d",e[j]);  
        }  
        printf("\n");
}
	return 0;
} 
