#include<stdio.h>
int main()
{
		int size,count=0,result,i;
		printf("enter size:");
		scanf("%d",&size);
		int a[size];
		printf("enter elements:");
		for(i=0;i<size;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<size;i++)
		{
			if(a[i]==0)
			{
					count=0;//reset count to 0
			}
			else
			{
					count++;
					result=count;
			}
		}
		printf("the maximum consecutive of 1's are:%d",result);
	}
		
