#include <stdio.h>
int main()
{
    int a = 100, b= 15;

    printf("%d, %d, %d\n", a/b, a%b, sizeof(a,b));
    printf("%d, %d, %d\n", a >> 3 << 3, a & b);

    return 0;
}
