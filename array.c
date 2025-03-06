#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    int *p;
    p=a;
    printf("Enter an array elements");
    for(i=0;i<5;i++)
    {
                    sacnf("%d",(p+i));
    }
    printf("Display an array elements");
    for(i=0;i<5;i++)
    {
                    printf("a[%d]=%d\n",i,*(p+i));
    }
    for(i=0;i<5;i++)
    {
         for(j=i+1;j<0;j++)
         {
                           if(*(p+i)>*(p+j))
                           {
                                            temp=*(p+i);
                                            *(p+i)=*(p+j);
                                            *(p+j)=temp;
                           }
         }
    }
    printf("ascending order of an array elements:\n");
                      for(i=0;i<5;i++)
    {
                      printf("a[%d]=%d\n",i,*(p+i));
    }                           
                    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
