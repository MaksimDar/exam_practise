#include <stdio.h>
#include <string.h>
#define MAX_CHAR 50
#define MAX_INFO 200
#define MAX_COUNTRIES 20
typedef struct {
    char country_name[MAX_CHAR];
    int medals[3];
} Country;
typedef struct {
    Country countries[MAX_COUNTRIES];
    int num_countries;
} Games;
int main() {
 char info[MAX_INFO];
 int medals;
 printf("Enter games info:\n");
 scanf("%s", info);
 printf("Enter value of the medals:\n");
 scanf("%d", &medals);
}