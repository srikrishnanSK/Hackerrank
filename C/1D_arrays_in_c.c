#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

    int size = 0,sum =0;
    scanf("%d",&size);
    int *arr_sum = (int*)malloc(size * sizeof(int));
    for(int i =0;i<size;i++)
    {
        scanf("%d",&arr_sum[i]);
        sum += arr_sum[i];
    }
    printf("%d",sum);
        
    return 0;
}