#include<stdio.h>
int main()
{
	int a=0,b=1,c,n;
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	c=a+b;
	while(c<=n){
		a=b;
		b=c;
		printf("%d\t",c);
		c=a+b;
	}
	return 0;
}
