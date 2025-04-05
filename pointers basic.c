#include<stdio.h>
int main(){
	int a,*p,*q;
	a=10;
	p=&a;
	q=p;
  printf("a= %d\n",a);	
  printf("p= %d\n",p);
  printf("&p= %d\n",&p);  
  printf(" &a = %d\n",&a);
  printf("*p = %d\n",*p);   
 printf("*q = %d\n",*q);
 printf("&q = %d\n",&q);  
 printf("q = %d\n",q);  
 printf("\n after changes ");
 a=a+20;
 printf("\n a = %d\n",a);
 printf("*p = %d\n",*p);
 printf("*q = %d\n",*q);
 printf("\nsize of pointer is %d bytes ",sizeof(p));
}
