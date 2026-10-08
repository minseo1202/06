#include <stdio.h>

int square(int a)
{
    return (a * a);
}
/*return으로 main에 저장된 값을 돌려주고, 그걸 다시 a에 저장해서 a=4가 됨.*/
int main()
{
    int a = 2;
    a = square(a);
    printf("a=%i\n", a);
    return 0;
}