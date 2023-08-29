#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,num,c=0,arm=0,rem,r,no;
	printf("Enter the number: ");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		rem=n%10;
		c++;
		n=n/10;
	}           
	no=num;
	for(i=0;i<c;i++)
	{
		r=num%10;
		arm+=pow(r,c);
		num=num/10;
	}
	if(no==arm)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not an armstrong number");
	}
}
