#include<stdio.h>
int ha(int num)
{
	int r,re=0;
	while(num>0){
		r=num%10;
		re=re+r*r;
		num=num/10;
	}
	if(re==1){
		return 1;
	}
	else if(re>9){
		return ha(re);
	}
	else{
		return 0;
	}
}
int main()
{
	int n,result;
	scanf("%d",&n);
	result=ha(n);
	if(result==1){
		printf("happy no");
	}
	else{
		printf("not a happyno");
	}
return 0;
}
