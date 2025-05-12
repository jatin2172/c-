#include<stdio.h>
#include<math.h>
int main(){
	int bin=0,i,j,x=0,gray;
	scanf("%d",&gray);
	while(gray!=0){
		i=gray%10;
		gray=gray/10;
		j=gray%10;
		if((i&&!j)||(!i&&j))
		bin=bin+pow(10,x);
		x++;
	}
	printf("%d",bin);
	return 0;
}
