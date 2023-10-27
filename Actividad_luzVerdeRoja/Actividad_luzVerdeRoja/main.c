
 
#include <stdio.h>
 
#include <string.h>
 
 
 
 
int main(void) {
 
    
 
    //char yes_response[3] = "yes";
 
    //char salir_response[3] = "yes";
 
    int x;
 
    int salir_response;
 
    int contador= 0;
 
    printf("Entrada ->");
 
    scanf("%d", &x);
 
    if(x == 0){
 
        printf("LUZ ROJA!!!");
 
    }
 
    contador = contador + x;
 
    printf("Desea salir? (yes -> 1/no -> 0)");
 
    scanf("%d", &salir_response);
  
        while(salir_response == 0){
 
            printf("Entrada ->");
 
            scanf("%d", &x);
 
            contador = contador + x;
 
            printf("Desea salir? (yes -> 1/no -> 0) ");
 
            scanf("%d", &salir_response);
 
            if(x == 0){
 
                contador = 0;
 
            }
 
            if(contador != 3){
 
                printf("LUZ ROJA!!!");
 
                //printf("Desea salir? (yes/no)");
 
                //scanf("%s", salir_response);
 
            }else if(contador == 3){
 
                printf("LUZ VERDE!!!");
 
                //printf("Desea salir? (yes/no)");
 
                //scanf("%s", salir_response);
 
            }else{
 
                printf("LUZ VERDE!!!");
 
                //printf("Desea salir? (yes/no)");
 
                //scanf("%s", salir_response);
 
            }
 
                
 
        }
 
        
 
    
 
    return 0;
 
}