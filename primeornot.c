#include<stdio.h>
int main()
{
	int n,i,c=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	for (i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			c=0;
		}
		
	}
	if(c==0)
	{
		printf("not a prime number");
	}
	else
	{
		printf("prime number");
	}
}
