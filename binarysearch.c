#include<stdio.h>
void main()
{
	int low,mid,high,key,n,i,a[100];
	printf("enter size of the array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to search");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(a[mid]<key)
		low=mid+1;
		else if(a[mid]==key)
		{
			printf("elements are present in array at %d",key,mid+1);
			break;
		}
		else
		high=mid-1;
		mid=(low+high)/2;
	}
	if(low>high)
		printf("elements are not present");
}


