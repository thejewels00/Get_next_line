#include <stdio.h>

int add()
{
    static int num = 5;

        num++;
    
    return (num);
}

int main()
{
    printf("%d\n", add());
    printf("%d\n", add());
    printf("%d\n", add());
    printf("%d\n", add());
    printf("%d\n", add());
    printf("%d\n", add());
}
