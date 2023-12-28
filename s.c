#include<stdio.h>

main(){
	int a,b,c;
	printf("Enter first no:");
	scanf("%d",&a);
	printf("Enter second no:");
	scanf("%d",&b);
	printf("Before swapping\t"
	"a=%d,b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swapping\t"   
	"a=%d,b=%d",a,b);
}