#include<stdio.h> 
int fibonacci(int n) 
{ 
   if (n <= 1) 
      return n; 
   return fibonacci(n-1) + fibonacci(n-2); 
} 
  
int main () 
{ 
  int n = 10; 
  printf("%d", fibonacci(n)); 
  return 0; 
} 
