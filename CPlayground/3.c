/*The prime factors of 13195 are 5, 7, 13 and 29.

  What is the largest prime factor of the number 600851475143 ? */

#include <stdio.h> 
#include <stdlib.h> 

int main(){ 
  int one = 5355; 
  int two = 1; 
  int three = two;
  while (one!=two) {
    if (one % two != 0){
      three = two;
    }
    two++;
  }
  printf("%d\n", three);
  return 0;
}
