#include<stdio.h>
#include<math.h>
int main(){
	int bin,i,j,x=0,gray=0;
	scanf("%d",&bin);
	while(bin!=0){
		i=bin%10;
		bin=bin/10;
		j=bin%10;
		if((i&&!j)||(!i&&j))
		gray=gray+pow(10,x);
		x++;
	}
	printf("%d",gray);
	return 0;
}
