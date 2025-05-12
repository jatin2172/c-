#include<stdio.h>
int main()
{
	int n,a,b,c,status=0;
	scanf("%d",&n);
	a=0;
	b=1;
while(c<=n){
	c=a+b;
	if(c==n){
		printf("fibonancci no");
		status=1;
	}
	a=b;
	b=c;
}
if(status==0){
	printf("not a fibonancci no");
}
return 0;	
}
