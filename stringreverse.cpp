#include<stdio.h>
#include<string.h>
int main(){
	char s[50],s1[50],i,j,n;
	scanf("%[^\n]s",s);
	for(i=0;i<50;i++){
		if(s[i]==' '&&s[i]!='\0')
		j++;
	}
	n=strlen(s);
	for(i=n;i>=1-j;i--){
printf("%c",s[i]);
	}
	
}
