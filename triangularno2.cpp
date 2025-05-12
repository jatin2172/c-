#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n,sum=0,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(i==(-1+sqrt(1+8*n))/2)
	{
		printf("yes");
		exit(0);
	}
}
printf("no");
    return 0;
}

