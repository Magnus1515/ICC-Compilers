

// VERSION FINAL QUE PASA TODAS LAS PRUEBAS

#include <stdio.h>

char array_caracters[10];
int currentIndex = 0;

int P();
int P_prime();
void coincidir(char c);

int main()
{
    printf("Ingrese el caracter: ");
    scanf(" %c", &array_caracters[currentIndex]);
    P();

    if (array_caracters[3] == '$')
    {
        printf("Analisis Exitoso\n");
    }
    else
    {
        printf("Error\n");
    }

    return 0;
}

int P()
{
    if (array_caracters[0] == 'Q')
    {
        coincidir('Q');
        P_prime();
    }
    return 0;
}

int P_prime()
{
    if (array_caracters[1] == '+')
    {
        coincidir('+');

        if (array_caracters[2] == 'Q')
        {
            coincidir('Q');
            return 0;
        }
        return 0;
    }
    return 0;
}

void coincidir(char c)
{

    if (array_caracters[currentIndex] == c)
    {
        printf("Ingresa el siguiente caracter: ");
        currentIndex++;
        scanf(" %c", &array_caracters[currentIndex]);
    }
    else
    {
        printf("Error: Caracter no coincide\n");
    }
}
