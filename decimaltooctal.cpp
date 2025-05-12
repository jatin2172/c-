#include<stdio.h>
int main(){
	int n,number[16],rem,i=0,j;
	scanf("%d",&n);
	while(n!=0){
		rem=n%8;
		number[i++]=rem;
		n=n/8;
	}
	for(j=i-1;j>=0;j--){
		printf("%d",number[j]);
	}
	/*to only print octal value*/
	return 0;
}
