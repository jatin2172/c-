#include<stdio.h>
int main(){
	int i;
	char str[50],temp;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i+=2){
		temp=str[i];
		str[i]=str[i+1];
		str[i+1]=temp;
	}
	printf("%s",str);
	return 0;
}
