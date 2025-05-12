#include<stdio.h>
int main(){
	int n,i,k,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i==(n/2)+1){
		for(j=1;j<=n;j++){
		printf("%d",i);
		}
	}
	else if(i<=n/2){
		for(j=1;j<=n;j++){
			if((j<=i)||(j>=n-i+1))
			printf("%d",i);
			else
			printf(" ");
		}
	}
	else{
			for(j=1;j<=n;j++){
			if((j<=n-i+1)||(j>n-(n-i+1)))
			printf("%d",i);
			else
			printf(" ");
		}	
	}
		printf("\n");
	}
	
	return 0;
}
