#include<stdio.h>
int main(){
	int n,i,pos,element;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d %d",&pos,&element);
	n=n+1;
	for(i=pos;i<n;i++){
		a[i+i]=a[i];
	}
	a[pos]=element;
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
