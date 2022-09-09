#include<stdio.h>
#include<string.h>
int main()
{
    int i, n = 0;
    int item;
    char x[10][12];
    char temp[12];
    
    printf("Enter each string on a separate line \n\n");
    printf("Type 'END' when over \n\n");
    /*read in the list of strings */
    do
    {
        printf("String %d:", n+1);
        scanf("%s", x[n]);
    }while(strcmp(x[n++], "END"));
    /*reorder the list of strings */
    n = n - 1;
    for(item=0; item< n-1; ++item)
    {
        /* find lowest of remainting strings */
        for(i=item+1; i<n; ++i)
        {
            if(strcmp (x[item], x[i]) >0)
            {
                /*interchange two strings */
                strcpy(temp, x[item]);
                strcmp(x[item], x[i]);
                strcmp(x[i], temp);
            }
        }
    }
    /*Display the arranged list of strings */
    printf("Recorded list of string: \n");
    for(i = 0; i<n; ++i)
    {
        printf("\nString %d is %s", i+1, x[i]);
    }
}
