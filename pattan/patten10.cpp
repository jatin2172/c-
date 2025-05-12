#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if((i==1)||(i==n)){
			if((j==1)||(j==n))//1st and last column
			printf("1");
			else printf("0");
		}
		else if(i==n/2+1){
			if(j==i)
			printf("0");
			else if((j==1)||(j==n))
			printf("1");
			else
			printf(" ");
		}
		else{
			if((j==i)||(j==n-i+1))//2nd and 2nd last column
			printf("0");
			else if((j==1)||(j==n))
			printf("1");
			else
			printf(" ");
		}
	  }
	  printf("\n");
	}
	return 0;
}
