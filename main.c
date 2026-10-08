#include <stdio.h>

int sumTwo(int a, int b)
{
    return (a + b);
}

int square(int n)
{
    return (n * n);
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else /*이때 else는 생략 가능*/
        return y;
}

int main(void)
{
    printf("sumTwo result : %i\n", sumTwo(10, 20));
    printf("square result : %i\n", square(5));
    printf("get_max result : %i\n", get_max(7, 12));

    return 0;
}