#include<stdio.h>
int main(){
	int n,number[16],i=0,rem,j,octal=0;
	scanf("%d",&n);
	while(n!=0){
		rem=n%8;
		number[i++]=rem;
		n=n/8;
	}
		for(j=i-1;j>=0;j--){
		octal=octal*10+number[j];
	}
		printf("%d",octal);
		/*to store octal value in a variable then print it*/
		return 0;
}
