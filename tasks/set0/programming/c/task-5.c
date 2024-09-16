#include <stdio.h>
#include <string.h>

int main()
{
    int a=2;
    int b=3;
    int sum=0;
    for (int i=1;i<=b;i++)
    {
        sum+=a;
        printf("%d\n",i);
    }
    printf("%d",sum);
}