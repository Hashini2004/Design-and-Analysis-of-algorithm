#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			c+=i;
		}
	}
	if(c==n)
	{
		printf("Perfect number: %d",n);
	}
	else
	{
		printf("Not a perfect number: %d",n);
	}
}
