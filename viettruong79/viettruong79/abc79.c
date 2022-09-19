#include<stdio.h>
#include<math.h>
float getarea(int a, int b, int c);
int main()
{
    int s, a, b, c;
    printf("\nEnter value of a, b, c:");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b > c && b+c > a && c+a > b)
    {
        s = getarea(a, b, c);
        printf("\nS = %d", s);
    }
    else
        printf("\nKhong hop le: ");
}
float getarea(int a, int b, int c)
{
    int x,y;
    x = (a+b+c)/2;
    y = sqrt(x*(x-a)*(x-b)*(x-c))/2;
    return y;
}
