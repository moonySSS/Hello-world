#include<stdio.h>
int main(){
	int m,n,p,q,gs=0;
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	scanf("%d",&a[i][j]);
  }
}
    for(int k=0;k<m;k++){//ÿһ�м��� 
	for(int i=0;i<n;i++){//ȷ���������Ҹ�������� 
		int js=0;
		for(int j=0;j<n;j++){
			if(a[k][i]>=a[k][j]) js=js+1;
		}
		if(js==n){
		p=i;	
		break;
    }
	}
	    int jss=0;//�ж��ǲ��Ǹ�����С 
    for(int i=0;i<m;i++){
    	if(a[k][p]<=a[i][p])
    	jss=jss+1;
	}
	if(jss==m){
		printf("a[%d][%d]=%d\n",k,p,a[k][p]);
		gs=gs+1;
}
    else continue;
}
    if(gs==0) printf("NO\n");
	return 0;
}
