#include<stdio.h>
int binarysearch(int a[],int b,int e,int v)
{
	int mid;
	if(e>=b)
	{
		mid=(b+e)/2;
		if(a[mid]==v)
		{
			return mid+1;
		}
		else if(a[mid]<v)
		{
			return binarysearch(a,mid+1,e,v);
		}
		else
		{
			return binarysearch(a,e,mid-1,v);
		}
	}
	return 1;
}
int main()
{
	int n,a[100],mid,i,ele;
	printf("Enter the array size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&ele);
	mid=binarysearch(a,0,n-1,ele);
	if(mid==1)
	{
		printf("Element is not found");
	}
	else
	{
		printf("Elemetnt is found at the %d index",mid);
	}
}
