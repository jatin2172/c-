#include<stdio.h>
int main(){
	int n,i=0,r,j,gray[16],binary[16];
	scanf("%d",&n);
	while(i!=16){
		gray[i]=0;
		i++;
	}
	while(n!=0){
		r=n%10;
		gray[i--]=r;
		n=n/10;
	}
	++i;
	binary[i]=gray[i];
	for(j=i+1;j<16;j++){
		binary[j]=gray[j]^binary[j-1];
	}
		for(j=0;j<16;j++){
		printf("%d",binary[j]);
	}
	return 0;
}
