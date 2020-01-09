#include <stdio.h>
#include <conio.h>

char *digits [] = {"zero","one","two","three","four","five","six","seven","eight","nine" };
char *twenty[] = { "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char *tens [] = {"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety",};
char *rest [] = { "hundred","thousand",};

void convert (int num){
    if (num >= 1000) 
	{ 
        if (num / 1000 >= 1) 
		{
            convert (num / 1000);
            printf ("thousand ");
        }
        convert (num % 1000) ;
    } 
    else if (num >= 100) 
	{ 
        if (num / 100 >= 1) {
            convert (num / 100);
            printf ("hundred ");
        }
        convert (num % 100);
    }
    else 
	{ 
        if (num >= 20) 
			{
            printf ("%s ", tens [num / 10 - 2]);
            if (num % 10 != 0)
                printf ("%s ", digits [num % 10]);
        	}
        else if (num > 9 && num < 20) 
			{
            printf ("%s ", twenty [num - 10]);
            return;
            }
            else 
			{
                printf ("%s ", digits [num]);
            }
    }
}
int main() 
{
	int num, choice;
    do{
		printf ("Enter a number: ");
		scanf ("%d", &num);
		convert (num);
        printf("\nPress any key to continue! Press ESC to exit!\n");
		choice=getch();
    } while (choice!=27);
}
