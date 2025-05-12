#include<stdio.h>
int main()
{
int n1,n2,n3,sum;
char s[10];
fgets(s,sizeof(s),stdin);
sscanf(s,"%d,%d,%d",&n1,&n2,&n3);
sum=n1+n2+n3;
printf("%d",sum);
    return 0;
}
