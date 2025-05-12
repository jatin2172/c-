#include<stdio.h>
#include<string.h>
	int main()
	{
		int i,j=0,length_word,length_str;
		char str[100],word[100];
		scanf("%[^\n]s",&str);
		length_str=strlen(str)+1;
		str[length_str-1]=' ';
			for(i=0;i<length_str;i++)
			{
			if(str[i]!=' ')
			word[j++]=str[i];
			else{
			j=0;
			length_word=strlen(word);
			while(length_word>0){
				printf("%c",word[--length_word]);
			}
			printf(" ");
			}
		}
		return 0;
		}

