#include<stdio.h>
int main()
{
	int n,i,j,pos,a[100],min=0;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
		if(a[j]<min)
		{
			min=a[j];
		}
		}
	}
	printf("MIN: %d",min);
}
