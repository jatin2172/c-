#include<stdio.h>
int main()
{
	int m=20,k=50;
	int n,n1;
	n=++m + ++k;
	n1=m-- + --k;
	n--;
	n1--;
	n-=n1;
	printf("%d",n+k);
}
