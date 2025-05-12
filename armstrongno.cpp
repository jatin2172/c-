#include<stdio.h>
#include<math.h>
int main(){
	int num,count=0,t,temp,r,sum=0;
	scanf("%d",&num);
	t=num;
	temp=num;
	while(t!=0){
		t=t/10;
		count++;
	}
while(num!=0){
		r=num%10;
		sum=sum+pow(r,count);
		num=num/10;
}
if(temp==sum){
	printf("armstrong no");
}
else{
	printf("not an armstrong no");
}
return 0;
}
