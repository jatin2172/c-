#include<stdio.h>
int main()
{
	int n,r,i=0,k;
	char hex[10];
	scanf("%d",&n);
	while(n!=0){
		r=n%16;
		if(r>=10){
				hex[i++]=r+55;//ASCII Value from A-F
		}
		else{
			hex[i++]=r+48;//ASCII value because 0=48 1=-49etc
		}
		n=n/16;	
	}
	for(k=i-1;k>=0;k--){
		printf("%c",hex[k]);
	}
	return 0;
}
