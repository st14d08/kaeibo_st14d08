#include<stdio.h>
#include"sum.h"

 int sum(int payments[] , int n);
 int sum(int payments[] , int n)
{
   int i;
     int total = 0;
   for(i=0; i<n; i++) {
       total += payments[i];
}

  return total;
}
