#include<stdio.h>
#include<string.h>
int main()
{
	char a[10][100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	scanf("%s",&a[n]);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(strcmp(a[i],a[n])==0)
		sum++;
	}
	printf("%d",sum);
	return 0;
}
