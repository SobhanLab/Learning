#include<stdio.h>

int main ()
{
    int sum=0;
    for (int a=1; a<=100; a++)
    {
        printf("%d + ", sum);
        sum = sum+a;
        printf("%d = %d\n", a, sum);
    }

    return 0;

}
