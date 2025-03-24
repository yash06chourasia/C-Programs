/*sort element of arrays and display them*/
#include<stdio.h.>
int main()
{ int i,j,temp, marks[5]={10,30,50,20,40};
for(i=0;i<=4;i++)
       {  for(j=i+1;j<=4;j++)
           {    if(marks[j]<marks[i])
                {  temp =marks[i];
                   marks[i]=marks[j];
                   marks[j]=temp;
                }
            }
        } 
for(i=0;i<=4;i++)
{
printf("%d\t",marks[i]);
}
return 0;
}
