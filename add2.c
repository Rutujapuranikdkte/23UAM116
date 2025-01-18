#include<stdio.h>
int main()
{
		int size,target,i,j,index=-1,index2=-1;
		printf("enter size");
		scanf("%d",&size);
		int a[size];
		printf("\nenter elements");
		for(i=0;i<size;i++)
		{
				scanf("%d",&a[i]);
		}
		printf("enter target");
		scanf("%d",&target);
		for(i=0;i<size;i++)
		{
			if(a[i]==target)
			{
				if(index==-1){
					index=i;
				}
		}
	}
		for(j=size-1;j>=0;j--)
		{
				if(a[j]==target)
				{
					if(index2==-1)
					{
						index2=j;
					}
				}
		}
		if(index!=-1&&index2!=-1)
		{
			printf("first index is%d",index);
			printf("second index is%d",index2);
		}
		else
		{
			printf("target not found");
		}
		return 0;
	}
