#include<stdio.h>
#include<math.h>
int main()
{
int m,i,j,val,count;
scanf("%d",&m);
for(i=2;i<=m;i++){
	count=0;
	for(j=2;j<=i;j++){	
if(i%j==0){
	count++;
	break;
}
}
if(count==0)
{
	val=pow(2,i)-1;
	for(j=2;j<=val/2;j++){
		if(val%j==0){
			count++;
			break;
		}
}
	if(count==0)
		printf("%d\n",val);
}
}
    return 0;
}

