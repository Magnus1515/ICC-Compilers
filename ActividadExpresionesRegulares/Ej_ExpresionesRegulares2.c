#include <stdio.h>
#include <string.h>

// Define states as constants
#define S0 "S0"
#define S1 "S1"
#define S2 "S2"
#define S3 "S3"
#define S4 "S4"
#define S5 "S5"
#define S6 "S6"

int main() {
    char input[4];

    while (1) {
        printf("\nEntrada -> ");
        scanf("%s", input);

        if (strcmp(input, "r") == 0) {
            printf("\n%s", S1);
            printf("\nEntrada -> ");
            scanf("%s", input);
            if (strcmp(input, "1") == 0 || strcmp(input, "2") == 0) {
                printf("\n%s", S2);
                break;
            } else if (strcmp(input, "3") == 0) {
                printf("\n%s", S5);
                break;
            } else if (strspn(input, "0123456789") == strlen(input)) {
                printf("\n%s", S4);
                break;
            }
        } else if (strncmp(input, "r1", 2) == 0 || strncmp(input, "r2", 2) == 0) {
            printf("\n%s", S2);
            break;
        } else if (strncmp(input, "r10", 3) == 0 || strncmp(input, "r", 2) == 0) {
            printf("\n%s", S3);
            break;
        } else if (strcmp(input, "r3") == 0) {
            printf("\n%s", S5);
            break;
        } else if (strncmp(input, "r30", 3) == 0 || strncmp(input, "r31", 3) == 0) {
            printf("\n%s", S6);
            break;
        } else if (strspn(input, "0123456789") == strlen(input)) {
            printf("\n%s", S4);
            break;
        } else {
            printf("Valor invalido");
            break;
        }
    }

    return 0;
}
