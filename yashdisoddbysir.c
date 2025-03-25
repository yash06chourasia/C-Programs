/*write a c program to display first n odd numbers*/ 
 #include<stdio.h>
int main()
{
	int count =0;
 int number=1;
 int n;
 printf("enter the no. of terms till where you want odd numbers: ");
 scanf("%d",&n);
 while(count<n){ 
 if((number%2)!=0)
 {printf("\n%d", number);
 count++;
 }
 number++;
 }
 return 0;
}
