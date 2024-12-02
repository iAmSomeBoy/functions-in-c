#include<stdio.h>

void printText();
int main()
{	
	int n ;
		
	printf("Enter2 your range_n\n");
	scanf("%d",&n);
	printText();
	
	return (0);
}

void printText()
{	
	int n ;
 	for(int i= 1 ; i<=n  ; i++)
 	{
 		printf("Hello World\n");
	 };
	
};