#include<string.h>
#include<stdio.h>
#include<conio.h>
#define MAX 100

void onetime(char str[])
{
    int i,j, dem = 0;
    char kytu;
    for(i=0;i<strlen(str);i++)
    {
        kytu=str[i];
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]==kytu)
            {
                dem = dem + 1;
            }
        }
        if(dem==1)
        printf("%c\t",str[i]);
        dem =0;
    }
}

int main()
{
    int choice;
    do
    {
    char str[100];
    printf("\nPlease enter a string: ");
    gets(str);

    printf("Found characters: ");
    onetime(str);
    printf("\nDo you want to continue or Press Esc to exit ");
    choice = getch();
    }while(choice!=27);
    return 0;

}
