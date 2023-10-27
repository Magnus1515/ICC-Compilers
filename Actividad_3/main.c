 
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
 
int concat(int a, int b)
{
  
    char s1[1000];
    char s2[1000];
  
    sprintf(s1, "%d", a);
    sprintf(s2, "%d", b);

    strcat(s1, s2);

    int c = atoi(s1);
  
    return c;
}

int main() {

    int num;
 
    int cadena_temporal;
 
    char exit_response[4];
 
    printf("Entrada -> ");
 
    scanf("%d", &num);
 
    if (num == 0 )
    {
        printf("Secuencia de numeros finalizada...");

    }else if(num >= 1 && num <=9){
        cadena_temporal = num; 

        printf("\nDesea salir? (yes / no) -> ");
        scanf("%s", exit_response);

        while(strcmp(exit_response, "yes")){

            printf("\nEntrada -> ");

            scanf("%d", &num);
            
            int concatenated = concat(cadena_temporal, num);

            cadena_temporal = concatenated;

            printf("%d",cadena_temporal);
            
            printf("\nDesea salir? (yes / no) -> ");
            
            scanf("%s", exit_response);

        }        
 

    }

    

    return 0;
 
}

