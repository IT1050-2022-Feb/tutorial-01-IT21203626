/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int a , d , total = 0;

  printf("Enter the end Number = ");
  scanf("%d", &a);

  for(d=0; d <=a; d++)
    {
      total = total + d;
    }

  printf("Total is = %d", total);

  
  return 0;
}

