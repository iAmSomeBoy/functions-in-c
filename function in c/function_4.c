#include<stdio.h>

void islam();
void hindu();
int main()
{
	printf("enter i for Islam _\n");
	printf("enter h for Hindu _\n");	
	
	char ch ;
	scanf("%c",&ch);
	
	if( ch =='i')
		{
			islam();
		}
		
	else if(ch == 'h')
		{
			hindu();
		}
		
	else
	  {
	  	printf("n/a");
	  }	;
    
	return(0);
}

 void islam()
     {
     	printf("Assalamu Alykum (owa.)\n");
	 };
 void hindu()
 	{
 		printf("Adab\n");
	}; 