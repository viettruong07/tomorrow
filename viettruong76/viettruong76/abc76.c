#include<stdio.h>
int main()
{
    char name[20];
    /* name is declared as a sing le dimensional character array */
    
    puts("Enter your name: "); /* Displays a message */
    gets(name);  /* Accepts the input */
    puts("Hi there: ");
    puts(name); /*Displays the input */
}
