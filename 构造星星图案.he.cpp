#include<stdio.h>
int main(){
	int n, i, m, g, f;              //n�����ݣ�i����nѭ����ÿ��m�У�g����mѭ��,f����ѭ�� 
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){       
	scanf("%d",&m);           
	if(m <= 20){                 //�ж�m��С 
	for(g = 0;g < m;g++){        //ÿһ�е�ѭ�� 
	for(f = 0;f < g;f++){        //���ھ��ж��룬�ո�ķֲ�ѭ�� 
	printf(" ");
    }
	for(f = 0;f < 2 * (m - g) - 1;f++){      //������*����ͼ�ε�ѭ�� 
	printf("*");                 
	}
    printf("\n");	
	}	
	}		
	}
	return 0; 
	}
