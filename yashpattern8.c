#include<stdio.h>
int main()
{
 int i,j,k,space;
 for(i=1;i<=5;i++)
 { for(space=1;space<=5-i;space++)
 {printf(" ");
 }
 for(j=1;j<=i;j++){
 	printf(" %d",j);
 }
 printf("\n");}
 return 0;
}	
