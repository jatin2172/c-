#include<stdio.h>
int main()
{
	int n,i,temp,rem,res;
	scanf("%d",&n);
	printf("0\n");
	for(i=1;i<n;i++){
		temp=i;
		res=0;
		//finding reverse of each number
	while(temp!=0){
		rem=temp%10;
		res=res*10+rem;
		temp=temp/10;
	}
	if(res==i)
	printf("%d\n",i);
}
	return 0;
}
