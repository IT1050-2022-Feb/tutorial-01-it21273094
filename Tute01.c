/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,total;
  float average;

  printf("enter the subject 1 mark:");
  scanf("%d",&mark1);

  printf("enter the subject 2 mark:");
  scanf("%d",&mark2);

  total=mark1+mark2;
  average=(float)total/2;

printf("average mark is %.2f",average);

  
  return 0;
}

