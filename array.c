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
			index2=i;
		}
	}
		if(index!=-1)
		{
				printf("\nthe first index is%d",index);
				printf("\nthe second index is%d",index2);
		}
		else
		{
				printf("target not found");
		}
}
