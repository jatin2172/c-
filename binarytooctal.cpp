#include<stdio.h>
int power(int x){
	int result=1;
	if(x==0){
		return 1;
	}
	else{
		while(x>0)
		{
			result=result*2;
			x--;
		}
	}
	return result;
}
int power1(int x){
	int result=1;
	if(x==0){
		return 1;
	}
	else{
		while(x>0)
		{
			result=result*10;
			x--;
		}
	}
	return result;
}

int main()
{
	int n,r,d=0,i=0,temp,t=0;
	scanf("%d",&n);
	temp=n;
	while(temp!=0){//to check for binary . 2 to 9 are not allowed//
		int digit=temp%10;
		if(digit>1){
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
i=0;
while(d!=0){//converting decimal to octal//
	r=d%8;
	t=t+r*power1(i++);
	d=d/8;
}
	printf("%d",t);
	return 0;
}
