#include <stdio.h>
#include <string.h>

int main() {
   char character, previousCharacter;
   int count = 0;
   int countChar = 0;
   int digit;
   int sum = 0;
   float percentageUp;
   int integerValue;
  
   do {
    printf("Enter a character: ");
    scanf(" %c", &character);
    countChar++;
    if (character >= 'a' && character <= 'z') {
        printf("%c -> ",character);
        previousCharacter = character;
        previousCharacter -= ('a' - 'A');
        printf("%c\n",  previousCharacter);
    };
    if (character >= '0' && character<= '9') {
        integerValue = character - '0';
        sum += integerValue;
    }
    if (character  >= 'A' && character <= 'Z') {
      count++;
    };
   } while ((character>= 'a' && character <= 'z') || (character  >= 'A' && character <= 'Z') || (character >= '0' && character<= '9'));
    
    percentageUp = (float)count / (countChar - 1) * 100.0f ;
    printf("Percentage uppercase = %.2f\n", percentageUp);
    printf("Numbers added up %d", sum);

    return 0;
}