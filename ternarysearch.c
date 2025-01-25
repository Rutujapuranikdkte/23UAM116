#include<stdio.h>
int main()
{
	int size,i,target,left=0,mid1=0,mid2=0;
	printf("enter size");
	scanf("%d",&size);
	int a[size];
	printf("\nenter ele");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int right=size-1;
	printf("\nenter target value");
	scanf("%d",&target);
	while(left<=right)
	{
		mid1=left+((right-left)/3);
		mid2=right-((right-left)/3);
		if(target==mid1)
		{
			printf("%d",mid1);
			break;
		}
		else if(target<a[mid1])
		{
			right=mid1-1;
		}
		else if(target>a[mid1]&&target<a[mid2])
		{
			left=mid1+1;
			right=mid2-1;
	
		}
		else if(target==a[mid2])
		{
			printf("%d",mid2);
			break;
		}
		else
		{
			left=mid2+1;
			
		}
	}
}
