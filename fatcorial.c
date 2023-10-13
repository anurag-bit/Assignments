#include <stdio.h>
#include <math.h>

int main(void)
{
    static int f;
    static int i;
    int a;
    printf("enter your desired number!");
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        f = f * i;
        printf("factorial:%d\n", f);
    }

    return 0;
}