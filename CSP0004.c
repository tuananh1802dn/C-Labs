#include <stdio.h>
#include <string.h>
#include <conio.h>
int out(char a[],int b[],int n,int max)
{
    int i;
    printf("\nTimes of appearance for each character: ");
    printf("\n");
    for(i=0;i<n;i++)
    printf("%3c",a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    printf("%3d",b[i]);
    printf("\nCharacters that appears the most:");
    printf("\n");
    for(i=0;i<n;i++)
    if (b[i]==max) printf("%3c",a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    if (b[i]==max) printf("%3d",b[i]);
}
int main()
{
    char str[50],a[50];
    int b[50],i,j,max,key,check,n;
    do {
        a[0]='\0';max=0;b[0]='\0';n=0;
        printf("\nInput string: ");
        gets(str);
        for(i=0;i<strlen(str);i++)
        {
            if (str[i]!=' ')
            {
                check=1;
                for(j=0;j<n;j++){
                if (a[j]==str[i])
                {
                    b[j]=b[j]+1;
                    if (max<b[j]) max=b[j];
                    check=0;
                }
                }
                if (check)
                {
                    a[n]=str[i];
                    a[n+1]='\0';
                    b[n]=1;
                    b[n+1]='\0';
                    n++;
                }
            }
        }
        out(a,b,n,max);
        fflush(stdin);
        printf("\nPress enter to continue another reverse, ESC to exit");
        key=getch();
    }while (key!=27);

}

