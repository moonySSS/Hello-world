#include<stdio.h>
void swap(int *A, int *B){
	int temp;
	temp=*A;
	*A=*B;
	*B=temp;
}
	int main(){
    void swap(int *A,int *B);
    int a,b;
    int *A,*B;
    scanf("%d %d",&a,&b);
    A=&a;
    B=&b;
    swap(A,B) ;
    printf("%d %d",a,b);
    printf("\n");
}
