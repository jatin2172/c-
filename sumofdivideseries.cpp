#include<stdio.h>
int main()
{
	int n;
	double sum=0.0;
	scanf("%d",&n);
	for(double i=1.0;i<=n;i++)
	sum=sum+1.0/i;
	printf("%lf",sum);
	return 0;
}
