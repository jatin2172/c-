#include<stdio.h>
int main(){
	int n,i=0,j,r,binary[16],gray[16];
	scanf("%d",&n);
	while(i!=16){
		binary[i++]=0;
	}
	while(n!=0){//insert the number into an array
		r=n%10;
		binary[i--]=r;
		n=n/10;
	}
    ++i;
	gray[i]=binary[i];//converting to gray code
	for(j=i;j<=16;j++){
		gray[j]=binary[j]^binary[j-1];
	}
	for(j=i;j<=16;j++){
		printf("%d",gray[j]);
			}
	return 0;
}
