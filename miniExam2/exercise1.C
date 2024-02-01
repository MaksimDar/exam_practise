#include <stdio.h>

int main() {
  int chairs = 0;
  int option;
  printf("How many chairs do you have?\n");
  scanf("%d",&chairs);
  do {
    printf("1.Rent chair | 2.Return chair | 3.Exit\n");
    scanf("%d", &option);
  
  if (option == 1) {
    if (chairs > 0) {
      chairs--;
    } else {
        printf("You don't have chairs to rent!\n\n");
    }
  };
  
  if (option == 2) {
      chairs++;
  };
  printf("You currently have %d chairs\n\n", chairs);
  } while (option !=3);
  printf("Bye!");
  return 0;
}