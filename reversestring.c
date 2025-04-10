#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],ch;
	char *b,*c;
	printf("\n string:");
	gets(a);
	b=a;
	c=a+(strlen(a)-1);
	puts(a);
	while(b<c)
	{
		ch=*b;
		*b=*c;
		*c=ch;
		b++;c--;
	}
	puts(a);
	return;
}
