#include<stdio.h>
#include<math.h>
int main(){
	int n,sum=0,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%2==0){
			sum=sum+i;
		}
		else{
			sum=sum-i;
		}
	}
	printf("%d",abs(sum));
	return 0;
}
