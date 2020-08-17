#include<stdio.h>
int sumdigits(int);
int main()
{
	int p;
	int sum;
	scanf("%d",&p);
	printf("sum of the digits=%d",sumdigits(p));
	return 0;
}
int sumdigits(int p)
{
	int x;
	if(p==0)
	 return 0;
	 else
	 x=p%10;
	 p=p/10;
	 return sumdigits(p)+x;
}
