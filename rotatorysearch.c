#include<stdio.h>
int main()
{
int size,target,i,mid,left=0;
	printf("enter size of array:");
	scanf("%d",&size);
	int a[size];
	printf("\nenter elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int right=size-1;
	printf("\nenter the target value");
	scanf("%d",&target);
	while(left<=right)
	{
	mid=(left+right)/2;
	if(a[mid]==target)
	{
	 printf("Element found at index %d\n", mid);
            return 0;
	}
	if(a[left]<=a[mid])
	{
		if(target>=a[left]&&target<a[mid])
		{
			right=mid-1;
		}
		else
		{
		left=mid+1;
		}
	}
	else
	{
		if(target>a[mid]&&target<=a[right])
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
}
printf("element not found");
return 0;
}
