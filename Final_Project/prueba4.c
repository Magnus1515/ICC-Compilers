// #include <stdio.h>

// char caracter[10];
// int currentIndex = 0; 
// char array_caracter[10];
// int P();
// int P_prime();
// void coincidir(char caracter);

// //Expresion Q + Q $  

// int main()
// {
//     printf("Ingrese el caracter: ");
//     scanf("%s", caracter);
//     P();

//     if (array_caracter[3] == '$' )
//     {
//         printf("Analisis Exitoso\n");
//     }
//     else
//     {
//         printf("Error\n");
//     }
//     return 0;
// }



// int P()
// {
//     if (array_caracter[0] == 'Q'){
        
//         coincidir('Q');
        
//         P_prime();
    
//     }
//     return 0;
// }

// int P_prime(){

    
//     if(array_caracter[1] == '+'){
//         printf("Entro al + \n");
//         coincidir('+');
        
   
//         if(array_caracter[2] == 'Q'){
//             printf("Entro al Q \n");
//             coincidir('Q');
            
//             P_prime();
//         }
//         return 0;
       

//     }
//     return 0;
// }

// void coincidir(char c) {
    
//     if (array_caracter[currentIndex] == c) {
        
//         printf("Ingresa el siguiente caracter: ");
//         scanf(" %c", caracter);
//         array_caracter[currentIndex] = caracter;
//         currentIndex++;
        
//     } else {
//         printf("Error: Caracter no coincide\n");
//     }
    
// }

#include <stdio.h>

char array_caracter[10];
int currentIndex = 0;

int P();
int P_prime();
void coincidir(char c);

int main() {
    printf("Ingrese el caracter: ");
    scanf(" %c", &array_caracter[currentIndex]); // Read a single character
    P();

    if (array_caracter[3] == '$') {
        printf("Analisis Exitoso\n");
    } else {
        printf("Error\n");
    }

    return 0;
}

int P() {
    if (array_caracter[0] == 'Q') {
        coincidir('Q');
        P_prime();
    }
    return 0;
}

int P_prime() {
    if (array_caracter[1] == '+') {
        printf("Entro al + \n");
        coincidir('+');

        if (array_caracter[2] == 'Q') {
            printf("Entro al Q \n");
            coincidir('Q');
            return 0;
            
        }
        return 0;
    }
    return 0;
}

void coincidir(char c) {
    
    if (array_caracter[currentIndex] == c) {
        printf("Ingresa el siguiente caracter: ");
        scanf(" %c", &array_caracter[currentIndex + 1]);
        currentIndex++;
    } else {
        printf("Error: Caracter no coincide\n");
    }
}
