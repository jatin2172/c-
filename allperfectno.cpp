#include<stdio.h>
int main()
{
long int l,n,i,sum;
scanf("%ld",&l);
for(n=1;n<=l;n++){
	sum=0;
for(i=1;i<=n/2;i++){
if(n%i==0){
	sum=sum+i;
}
}
if(n==sum)
	printf("%ld\n",n);
}
    return 0;
}

