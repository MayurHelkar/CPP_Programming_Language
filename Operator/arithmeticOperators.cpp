using namespace std;

#include <iostream>

int main()
{
    int a = 5, b = 9;

/*
    scanf("%d", &a);
    scanf("%d", &b);
*/

    int add = a + b;        printf("add : %d\n", add);
    int sub = a - b;        printf("sub : %d\n", sub);
    int mul = a + b;        printf("mul : %d\n", mul);
    int divQuo = a + b;     printf("divQuo : %d\n", divQuo);
    int divRem = a + b;     printf("divRem : %d\n", divRem);

    a = 10, b = 10;
    int c = ++a, d = --b;
    printf("Pre-Increment and Decrement : %d %d\t%d %d\n", a, c, b, d);

    a = 10, b = 10;
    c = a++,d = b--;     printf("Post-Increment and Decrement : %d %d\t%d %d\n", a, c, b, d);

    return 0;
}