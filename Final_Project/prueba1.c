#include <stdio.h>

char caracter[0];
char caracter_sig[0];

void P();
void P_prime();
void coincidir(char c);

int main() {
    printf("Ingrese el caracter: ");
    scanf("%s", caracter);

    P();

    if (caracter[0] == '$') {
        printf("Analisis Exitoso\n");
    } else {
        printf("Error\n");
    }

    return 0;
}

void P() {
    if (caracter[0] == 'Q') {
        coincidir('Q');
        if (caracter[0] == '+') {
            coincidir('+');
            P_prime();
        } else {
            printf("Error\n");
        }
    } else {
        printf("Error\n");
    }
}

void P_prime() {
    if (caracter[0] == 'Q') {
        coincidir('Q');
        coincidir('$');
    } else {
        printf("Error\n");
    }
}

void coincidir(char c) {
    if (caracter[0] == c) {
        printf("Ingresa el siguiente caracter: ");
        scanf("%s", caracter);
    } else {
        printf("Error\n");
    }
}
