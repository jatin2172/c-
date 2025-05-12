#include<stdio.h>
int main(){
	int n,i,j,count,status=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		count=0;
		for(j=0;j<n;j++){
			if(a[i]==a[j])
			count++;
		}
		if(count>n/2){
			printf("%d",a[i]);
			status=1;
			break;//we can write exit(0)
		}
	}
	if(status==0)
	printf("majority element does not exist");
	return 0;
}
