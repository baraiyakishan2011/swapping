#include<stdio.h>

main(){
	int a=10;
	int b=20;
	printf("a=%d,b=%d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a=%d,b=%d \n",a,b);
}