/* This is a simple program which demostrates how a string can be printed from within a format command and also as an argument. Thia program also displays a single character, integer, and float. */

#include <stdio.h>
int main()
{
    int a = 10;
    float b = 24.67892345;
    char ch = 'A';
    printf("Integer data = %d", a);
    printf("Float Data = %f", b);
    printf("Character = %c", ch);
    printf("This prints the string");
    printf("%s","This also prints a string");
}
