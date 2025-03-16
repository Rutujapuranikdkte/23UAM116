#include<stdio.h>
int main()
{
	int a[10],i,j,size,sec_lar=0,lar=a[0];
	printf("enter size");
	scanf("%d",&size);
	 a[size];
	printf("enter elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<size;i++)
	{
		if(a[i]>lar)
		{
			sec_lar=lar;
			lar=a[i];
		}
		else if(a[i]>sec_lar&&a[i]<lar)
		{
			sec_lar=a[i];
		}
	

	}
	if(sec_lar==-1)
	{
		printf("no ele found");
	}
	else
	{
		printf("element found at : %d",sec_lar);
	}
}
