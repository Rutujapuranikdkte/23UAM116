#include<stdio.h>
int main()
{
		int size,maxgap=0,gap,i;
		printf("enter size:");
		scanf("%d",&size);
		int a[size];
		printf("enter elements:");
		for(i=0;i<size;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<size;i++)
		{
			gap=a[i]-a[i-1];
			if(gap>maxgap)
			{
				maxgap=gap;
			}
		}
		printf("the maximum gap is %d",maxgap);
}
