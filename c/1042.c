#include<stdio.h>

int main ()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a>b && a>c && b>c) printf ("%d\n%d\n%d\n", c, b, a);
    else if (a>b && a>c && c>b) printf("%d\n%d\n%d\n", b, c, a);
    else if (b>a && b>c && a>c) printf("%d\n%d\n%d\n", c, a, b);
    else if (b>a && b>c && c>a) printf("%d\n%d\n%d\n", a, c, b);
    else if (c>a && c>b && a>b) printf("%d\n%d\n%d\n", b, a, c);
    else if (c>a && c>b && b>a) printf("%d\n%d\n%d\n", a, b, c);
    printf ("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}
