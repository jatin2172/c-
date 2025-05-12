#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,sum=0,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	sum=sum+i;
	if(sum==n)
	{
		printf("yes");
		exit(0);
	}
}
printf("no");
    return 0;
}

