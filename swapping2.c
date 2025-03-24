#include<stdio.h>
int main()
{ int a=10;
int b =20;
printf("value before swapping :" );
printf("value of a : %d\n",a);
printf("value of b : %d\n",b);
a=a+b;
b=a-b;
a=a-b;
printf("value after swapping :" );
printf("value of a : %d\n",a);
printf("value of b : %d\n",b);
}

