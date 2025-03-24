#include<stdio.h>
int main()
{ int i;
int a[10]={100,234,46,86,46,4579,2478,979,56,1000};
for(i=0;i<10;i++)
{
	printf("%d\t",a[i]);
}
printf("\n");
for(i=0;i<10;i++)
{if(a[i]%2!=0)
{
	printf("%d\t",a[i]);
}
}
return 0;
}
