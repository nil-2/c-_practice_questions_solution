#include<stdio.h>
#include<math.h>
int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c;
    int i;

    if (n==0)
    {
        return a;
    }
    
    for (int i = 2; i < n; i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    
    return b;
}


int main(void)
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}
