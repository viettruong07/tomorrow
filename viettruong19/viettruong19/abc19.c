/* Program to demonstrate the use of getchar() */
#include <stdio.h>
int main()
{
    char letter;
    printf("\nPlease enter any character: ");
    letter = getchar();
    printf("\nThe character entered by you is %c . ", letter);
    
}
