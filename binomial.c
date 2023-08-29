#include<stdio.h>
int main()
{
	int n,i,j,num;
	printf("Enter the number: ");
	scanf("%d ",&n);
	for(i=0;i<=n;i++)
	{
		num=1;
		printf("%d",i);
		for(j=0;j<=i;j++)
		{
			if(j!=0 && i!=0)
			{
				num=num*(i-j+1)/j;
			}
			printf("%d ",num);
		}
		printf("\n");
	}
}
