#include<stdio.h>
int main()
{
int i, arr[5];
printf("ENTER THE FIVE ELEMENTS OF ARRAY : ");
for(i=0;i<=4;i++)	
{ scanf("%d",&arr[i]);
}
printf("THE FIVE ELEMENTS OF ARRAY ARE : ");
for(i=0;i<=4;i++)	
{ printf("%d\t",arr[i]);
}
return 0;
}
