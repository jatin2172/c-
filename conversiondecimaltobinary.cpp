#include<stdio.h>
int main()
{
	int n,i=16,l[i],j,k,p;
	scanf("%d",&n);
		for(k=1;k<=16;k++){
	l[k]=0;
	}
	while(n!=0){
		l[i]=n%2;
		n=n/2;
		i--;
	}
	j=i;
	for(k=j;k<=16;k++){
		l[p]=l[j];
	}
		for(p=1;p<=16;p++){
		printf("%d",l[p]);
	}
	return 0;
}
