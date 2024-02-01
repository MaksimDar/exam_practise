#include <stdio.h>
#define MAX 12
int main() {
    int numbers[MAX];
    int i = 0;
    int j;
    int ok = 1;
    do {
        printf("Number? ");
        scanf("%d", &numbers[i]);
        if (i > 0) {
            if (numbers[i] == numbers[i-1]) {
              ok = 0; 
            }
        }
        i++;
    } while (ok);
    for (j = i -1;j>=0;j--) {
        if (numbers[j] % 2 == 0) {
            printf("%d ",numbers[j]);
        }
    }
    return 0;
}