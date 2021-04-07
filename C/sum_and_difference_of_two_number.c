#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int first =0, second =0;
    float f_first =0.0, f_second = 0;
    scanf("%d%d",&first,&second);
    scanf("%f%f",&f_first,&f_second);
    printf("%d %d\n",(first+second),(first-second));
    printf("%.1f %.1f\n", (f_first+f_second),(f_first-f_second));
    return 0;
}