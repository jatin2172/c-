#include<stdio.h>
int main(){
	int n,number[16],rem,i=0,count=0,j,temp;
	scanf("%d",&n);
	while(count<16)
	number[count++]=0;
	while(n!=0){
		rem=n%2;
		number[i++]=rem;
		n=n/2;
	}
	for(i=0,j=15;i<j;i++,j--){
		temp=number[i];
		number[i]=number[j];
		number[j]=temp;
	}
	for(i=1;i<16;i++){
		printf("%d",number[i]);
	}
	return 0;
}
