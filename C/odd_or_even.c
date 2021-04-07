#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
   int a, upper;
    scanf("%d\n%d", &a, &upper);
  	const char words[9][6] = {"one","two","three","four","five","six","seven","eight","nine"};
      
      for(int lower = a; lower <= upper; lower++ )
      {
          if((lower>=1)&&(lower<=9))
          {
              printf("%s\n",words[lower-1]);
          }
          
          else if (lower > 9)
          {
              if(lower%2==0)
              {
                  printf("even\n");
              }
              
              else
              {
                  printf("odd\n");
              }
          }
          
      }

    return 0;
}

