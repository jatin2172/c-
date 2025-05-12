#include<stdio.h>
#include<math.h>
int main()
{
	long long int n;
	int dec=0,oct=0,rem,i=0;
	scanf("%lld",&n);
	while(n!=0){
		rem=n%10;
		dec=dec+rem*pow(2,i);
		n=n/10;
		i++;
	}
	i=0;
	while(dec!=0){
		rem=dec%8;
		oct=oct+rem*pow(10,i);
		dec=dec/8;
		i++;
	}
	printf("%d",oct);
}
