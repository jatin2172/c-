//A number 'N' is a fibonacci no if 5N^2+4 or 5N^2-4 is a perfect square number//
#include<stdio.h>
#include<math.h>
int perfectsquare(int num)
{
	int i;
	i=sqrt(num);
	return(i*i==num);
}
int main()
{
	int n,result;
	scanf("%d",&n);
	result=perfectsquare(5*n*n+4)||perfectsquare(5*n*n-4);
	if(result==1)
	printf("fibonancci no");
	else
	printf("not a fibonancci no");
return 0;	
}
