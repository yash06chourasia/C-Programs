#include<stdio.h>
int main()
{
 int i,j,k,space;
 for(i=10;i>=1;i--)
 { for(space=1;space<=10-i;space++)
 {printf(" ");
 }
 for(j=1;j<=i;j++){
 	printf(" *");
 }
 printf("\n");}
 return 0;
}	
