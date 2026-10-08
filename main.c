#include <stdio.h>

void square(int a) 
{
    a = a * a;
}

/*a의 복사본이 들어가는 것.
square 함수가 실행되서 a가 4가 되어도
void함수이기 때문에 {} 밖으로 나가면 변수에 저장된 값이 초기화됨*/

int main()
{
    int a = 2;
    square(a);
    printf("a=%i\n", a);
    return 0;
}