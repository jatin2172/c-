#include<stdio.h>
int main(){
	int n,sum,count=0;
	scanf("%d",&n);
	while(sum<=n){
		printf("%d\t",sum);
		sum=sum+count;
		++count;
	}
	return 0;
}
