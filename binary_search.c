#include<stdio.h>
int main()
{
	int n,i,ele,a[100],c=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be found: ");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(ele==a[i])
		{
			c=1;
		}
	}
	if(c==1)
	{
		printf("Element is found: %d",ele);
	}
	else
	{
		printf("Element is not found");
	}
}
