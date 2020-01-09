#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
char str[100];
int i,key;
do{

	printf("\nInput a string: ");
	gets(str);
	
	printf("\nThe old string: %s", str);
	  for(i=strlen(str); i>=0;i--)
	  {
		if(str[i]==' ')
		    {
		  	str[i]='\0';
		  	printf("\nThe reversed string: %s ", &str[i]+1);
		  	
		    }
      }
    printf("%s ", str);
    key=getch(); 
   }while(key!=27);
}



