#include<stdio.h>
int main()
{
	int i,n,a[1000];
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	for(i=2;i<1000;i++)
	{
		a[i]=a[i-1]+a[i-2];
		if(a[i]==n)
		{
			printf("%d is Fibonacci number",n);
		}
	}
	
}
