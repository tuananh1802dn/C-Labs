#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* lTrim (char s[])
{
	int i=0;
	while (s[i]==' ') i++;
	if (i>0) strcpy(&s[0], &s[i]);
	return s;
}
char* rTrim (char s[])
{
	int i=strlen(s)-1;
	while (s[i]==' ') i--;
	s[i+1]= '\0'; 
	return s;
}
char* trim (char s[])
{
	rTrim(lTrim(s));
	char *ptr=strstr(s, "  ");
	while (ptr!=NULL)
	{
		strcpy( ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}
int main(){
    int choice;
    char str[101];
    do {
        printf("Please enter a string: ");
        gets(str);
        trim(str);
        printf("The string after removing: ");
        puts(str);
        printf("-----------------------------------------------------------------------\n");
        printf("Press Enter to continue, Esc to exit");
        choice=getch();
    } while (choice!=27);
}


