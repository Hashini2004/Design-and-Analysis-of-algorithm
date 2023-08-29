#include<stdio.h>
int fact(n)
{
	if(n>0)
	{
		int f=1,i=1;
		while(n>0)
		{
			f=f*i;
			i++;
			n--;
		}
		return f;
	}
	else if(n==0)
	{
		return 1;
	}
}
int main()
{
	int c=1,i,j,n,sp;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(sp=1;sp<=n-i;sp++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			c=fact(i)/(fact(j)*fact(i-j));
			printf("%d ",c);
		}
		printf("\n");
	}
}
