#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int isNarcissistic(int n){
  int i, result, verify, j, number, length, count, digits, narcis;
  count = 0;
  length = n;
  verify = n;
  // Number of Digits gathering
  do {
    count++;
    length /= 10;
  }while(length!=0);
  //Select and pow Digits
  j=1;
  result = 0;
  for(i=0; i<count;i++){
    digits = number / pow(10,count-j);
    narcis = pow(digits,count);
    number = number - digits*pow(10,count-j);
    result = result + narcis;
    j++;
  }
  //Narcissistic verifying
  return result == n ;
}

int main(){

  isNarcissistic(153);
  return 0;
}
