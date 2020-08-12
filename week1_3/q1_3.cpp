#include <stdio.h>
#include<string.h>
int main()
{
    long a, i, j, s1 = 0, s2 = 0;
    scanf("%ld", &a);
    for (i = 1; i <= a; i++)
    {
        s1 += i;
    }
    s1 *= s1;
    for (j = 1; j <= a; j++)
    {
        s2 += j * j;
    }
    printf("%ld", s1 - s2);
    return 0;
}