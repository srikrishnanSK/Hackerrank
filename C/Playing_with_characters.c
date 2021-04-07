#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/** Main function without any arguments */
int main(void) 
{
    char first_char; ///Char
    char strin[50], sen[150];//string and sentence declaration
    scanf("%c",&first_char);/** getting the input */
    scanf("%s\n",strin);
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s\n",first_char,strin,sen); /* Printing the values */
    
    
    return 0;
}