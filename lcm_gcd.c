#include<stdio.h>
int main()
{
	int n1,n2,i,rem;
	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	rem=n1%n2;
	while(rem!=0)
	{
		n1=n2;
		n2=rem;
		rem=n1%n2;
	}
	printf("GCD: %d",n2);
}
