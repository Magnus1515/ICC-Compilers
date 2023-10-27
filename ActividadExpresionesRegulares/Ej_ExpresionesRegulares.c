#include <stdio.h>
#include <string.h>

int main() {
    const char S0[10] = "S0";
    const char S1[10] = "S1";
    const char S2[10] = "S2";
    const char S3[10] = "S3";
    const char S4[10] = "S4";
    const char S5[10] = "S5";
    const char S6[10] = "S6";

    char variable_init[4];
    char variable_init_2[4];
    char variable_init_3[4];
    char variable_init_4[4];
    printf("\n%s\n", S0);
    while (1) {
        printf("\nEntrada -> ");
        scanf("%s", variable_init);

        if (strcmp(variable_init, "r") == 0) {
            printf("\n%s\n", S1);
            printf("\nEntrada -> ");
            scanf("%s", variable_init_2);
            if (strcmp(variable_init_2, "1") == 0 || strcmp(variable_init_2, "2") == 0 )
            {
                printf("\n%s\n", S1);
                printf("\n%s\n", S2);
                break;
                
            }else if(strcmp(variable_init_2, "3") == 0 ){
                printf("\n%s\n", S1);
                printf("\n%s\n", S5);
                break;
                
            }else if(strcmp(variable_init_2, "0") == 0 || strcmp(variable_init_2, "4") == 0 ||
            strcmp(variable_init_2, "5") == 0 || strcmp(variable_init_2, "6") == 0 ||
            strcmp(variable_init_2, "7") == 0 || strcmp(variable_init_2, "8") == 0 ||
            strcmp(variable_init_2, "9") == 0){
                printf("\n%s\n", S1);
                printf("\n%s\n", S4);
                break;
            }
            
        } else if (strcmp(variable_init, "r1") == 0 || strcmp(variable_init, "r2") == 0 ) {
            printf("\n%s\n", S1);
            printf("\n%s\n", S2);
            break;
        }else if(strcmp(variable_init, "r10") == 0 || strcmp(variable_init, "r11") == 0 ||
                   strcmp(variable_init, "r12") == 0 || strcmp(variable_init, "r13") == 0 ||
                   strcmp(variable_init, "r14") == 0 || strcmp(variable_init, "r15") == 0 ||
                   strcmp(variable_init, "r16") == 0 || strcmp(variable_init, "r16") == 0 ||
                   strcmp(variable_init, "r17") == 0 || strcmp(variable_init,"r18") == 0 ||
                   strcmp(variable_init, "r19") == 0 || strcmp(variable_init,"r20") == 0 || 
                   strcmp(variable_init, "r21") == 0 || strcmp(variable_init,"r22") == 0 || 
                   strcmp(variable_init, "r23") == 0 ||strcmp(variable_init, "r24") == 0 || 
                   strcmp(variable_init, "r25") == 0 ||strcmp(variable_init, "r26") == 0 || 
                   strcmp(variable_init, "r26") == 0 ||strcmp(variable_init, "r27") == 0 || 
                   strcmp(variable_init, "r28") == 0 ||strcmp(variable_init, "r29") == 0){
            printf("\n%s\n", S1);
            printf("\n%s\n", S2);
            printf("\n%s\n", S3);
            break;
        }else if(strcmp(variable_init, "r3") == 0 ){
            printf("\n%s\n", S1);
            printf("\n%s\n", S5);  
            break;
        }else if(strcmp(variable_init, "r30") == 0 || strcmp(variable_init, "r31") == 0 ){
            printf("\n%s\n", S1);
            printf("\n%s\n", S5);
            printf("\n%s\n", S6);
            break;  
        }else if(strcmp(variable_init, "r0") == 0 || strcmp(variable_init, "r4") == 0 || 
        strcmp(variable_init, "r5") == 0 || strcmp(variable_init, "r6") == 0 ||
        strcmp(variable_init, "r7") == 0 || strcmp(variable_init, "r8") == 0 || 
        strcmp(variable_init, "r9") == 0){
            printf("\n%s\n", S1);
            printf("\n%s\n", S4);
            break;

        }else {
            printf("Valor invalido\n");
            break;
        }
    }

    return 0;
}
