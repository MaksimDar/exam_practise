#include <stdio.h>
int main() {
    int number, number_origin;
    int digit;
    int sum = 0;
    int result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    number_origin = number;
    printf("Digits = ");
    while (number > 0) {
       digit = (number % 10); 
       printf("%d ",digit);
       sum += digit;
       number = number / 10;
    };
    if (number_origin % sum == 0) {
          printf("\n%d is a Harshad number.", number_origin);
      } else {
        printf("\n%d is not a Harshad number.", number_origin);  
      }
   return 0; 
}