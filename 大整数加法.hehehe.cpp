#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 1000

int main(){
    char a[N],b[N],c[N];
    int n;
    scanf("%d",&n);
    for(int u = 0; u < n; u++){
    	int mid = 0, count = 0, length_a, length_b, length_c;  //用length存各个字符串的长度 

	    scanf("%s",a);
	    while(a[length_a]) length_a++;       //当读到最后一位字符串末尾为'0'时结束 
	    length_a -= 1;
	       
        scanf("%s",b);
	    while(b[length_b]) length_b++;  
	    length_b -= 1;
	        
	    if(length_a > length_b) length_c = length_a;
		else length_c = length_b;   
		length_c += 2;             
		c[length_c] = '0';
	   
	    while(length_c >= 0){
	    	if(length_a >= 0) mid = a[length_a] - '0';
			else mid = 0;

			if(length_b >= 0) mid = mid + b[length_b] - '0';
			else mid = mid + 0;

			mid += count;
	        count = mid / 10; 
			c[length_c] = '0' + mid % 10;
	        length_a--;
			length_b--;
			length_c--;
	    }
	    
	    if (c[1] == '0') for(int g = 2; g < strlen(c); g++) printf("%c",c[g]);
	    else for(int g = 1; g < strlen(c); g++) printf("%c",c[g]);
		printf("\n");
    }
    
    return 0;
}
