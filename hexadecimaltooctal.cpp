#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int sum=0,i,octal=0,r;
char hex[16];
scanf("%s",&hex);
int l=strlen(hex);
for(i=l-1;i>=0;i--){//converting to decimal
	if(hex[i]>='A'&&hex[i]<='F'){
	hex[i]=hex[i]-55;
}
	else if(hex[i]>='a'&&hex[i]<='f'){
		hex[i]=hex[i]-87;
	}
	else{
		hex[i]=hex[i]-48;
	}
	sum=sum+hex[i]*pow(16,l-i-1);
}
printf("%d\n",sum);
while(sum!=0){
	r=sum%8;
	octal=octal*10+r;
	sum=sum/8;
}
printf("%d",octal);
	return 0;
}
