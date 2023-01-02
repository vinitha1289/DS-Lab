#include<stdio.h>
void main()
{
	int i,key,a[100],num,count=0;
	printf("enter the size of array");
	scanf("%d",&num);
	printf("enter the array elements");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements to be searched");
	scanf("%d",&key);
	
		for(i=0;i<num;i++)
	
	{
	if(key==a[i])
	{

		count = 1;
		break;
	}
	}
	if(count==1)

		printf("elements are present in the position %d",i+1);
	else
		printf("elements are not present in the position");
}

