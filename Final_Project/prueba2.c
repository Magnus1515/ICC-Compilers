#include <stdio.h>

char caracter[4];
char caracter_sig[4];

int P();
int P_prime();
int coincidir(char caracter);



int main()
{
    printf("Ingrese el caracter: ");
    scanf("%3s", caracter); 

    P();

    if (caracter[0] == '$')
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
    if (caracter[0] == 'Q')
    {
        caracter_sig[0] = '+';
        P_prime();
    }
    return 0;
}

int P_prime()
{
    if (caracter_sig[0] == '+' && caracter[0] != '$')
    {
        coincidir(caracter_sig[0]);
        coincidir(caracter[0]);
        P();
    }
    return 0;
}

int coincidir(char carater)
{
    if (caracter_sig[0] == caracter[0])
    {
        printf("Ingresa el siguiente caracter: ");
        scanf("%3s", caracter);
    }
    else if (caracter[0] == '$')
    {
        return 0;
    }
    return 0;
}


// int coincidir(char carater)
// {
//     if (caracter[currentIndex] == caracter)
//     {
//         printf("Ingresa el siguiente caracter ");
//         scanf("%s", caracter);
//         currentIndex++;
//     }
//     else {
        
//         return 0;
//     }
 
// }
