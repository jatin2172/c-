#include<stdio.h>
int sum(int n)
{
	n=3;
	if(n==2) return 2;
	return sum(n-1)*n;
}
int main()
{
	printf("%d\n",sum(5));
	return 0;
}
