#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h> 

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    char arr[strlen(s)];
    for(int i =0;i<strlen(s);i++)
    {
        arr[i]= s[i];
        if(isspace(arr[i]))
        {
            printf("%s\n",arr);
            memset(arr, 0, i);
        }
        
    }
    return 0;
}   
