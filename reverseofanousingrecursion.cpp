#include<stdio.h>
int rev=0;
int reverse(int a)
{
	int rem;
	if(a){
	rem=a%10;
	rev=rev*10+rem;
	reverse(a/10);
}
	return rev;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("the reverse of no is %d",reverse(n));
	return 0;
}
