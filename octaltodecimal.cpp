#include<stdio.h>
int power(int x){
	int result=1;
	if(x==0){
		return 1;
	}
	else{
		while(x>0)
		{
			result=result*8;
			x--;
		}
	}
	return result;
}
int main()
{
	int n,r,d=0,i=0,temp;
	scanf("%d",&n);
	temp=n;
	while(temp!=0){//to check for octal . 8 & 9 are not allowed//
		int digit=temp%10;
		if(digit>7){
			printf("not valid");
			return 0;
		}
		temp=temp/10;
	}
while(n!=0){//converting to decimal//
	r=n%10;
	d=d+r*power(i++);
	n=n/10;
}
	printf("%d",d);
	return 0;
}
