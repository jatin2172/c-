#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	char s[50],s1[50],i,j,n,k=0;
	scanf("%[^\n]s",s);
	n=strlen(s);
	for(i=n-1;i>=-1;i--){
	if(s[i]==' '||(i==-1)){
		for(j=i+1;(s[j]!='\0'&&s[j]!=' ');j++){
			s1[k++]=s[j];
		}
		s1[k++]=' ';
	}
	}
	n=strlen(s1);
	puts(s1);
return 0;	
}
