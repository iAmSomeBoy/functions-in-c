#include<stdio.h>

int multiTable(int n);
int main()
{
	int n ;
	printf("enter which number`s multiplication table you need_n = ");
	scanf("%d",&n);
	multiTable(n);
	
	return (0);
}

int multiTable(int n)
{
	int b ;
	for(int i = 1; i <= 10 ; i++)
	{
		int multi = n * i ;
		printf("%d * %d = %d\n",n,i,multi);
	};
};