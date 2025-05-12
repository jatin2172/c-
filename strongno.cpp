#include<stdio.h>
int fact(int a){
	int z=1,i;
	for(i=a;i>0;i--)
	z=z*i;
	return z;
}
int main()
{
	int n,r,num=0,temp;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		num=num+fact(r);
		n=n/10;
	}
	if(temp==num){
		printf("strong number");
	}
	else{
		printf("not a strong number");
	}
	return 0;
}
