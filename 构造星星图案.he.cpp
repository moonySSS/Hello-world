#include<stdio.h>
int main(){
	int n, i, m, g, f;              //n组数据，i用于n循环，每组m行，g用于m循环,f行内循环 
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){       
	scanf("%d",&m);           
	if(m <= 20){                 //判断m大小 
	for(g = 0;g < m;g++){        //每一行的循环 
	for(f = 0;f < g;f++){        //用于居中对齐，空格的分布循环 
	printf(" ");
    }
	for(f = 0;f < 2 * (m - g) - 1;f++){      //用于用*构造图形的循环 
	printf("*");                 
	}
    printf("\n");	
	}	
	}		
	}
	return 0; 
	}
