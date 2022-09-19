#include<stdio.h>
int check(int num);

int main()
{
    int arr[5], i;
    for(i=0; i<5; i++)
    {
        printf("Nhap so thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
        if(check(arr[i])==0)
        {
            printf("\nBoi so cua 50: %d", arr[i]);
        }
    }
}
int check(int num)
{
    if(num%50==0)
    {
        return 0;
    } else return 1;
}
