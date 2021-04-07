#include <stdio.h>

int max_of_two(int a, int b)
{
    return (a > b ? a : b);
}

int max_of_four(int a, int b, int c, int d)
{
    int max = a;
     max = max_of_two(max, b);
     max = max_of_two(max, c);
     max = max_of_two(max, d);
     return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}