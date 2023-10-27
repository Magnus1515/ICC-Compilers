#include <stdio.h>
#include <string.h>

int main(){



    const char S0[10] = "S0 = 00"; 
    const char S1[10] = "S1 = 01"; 
    const char S2[10] = "S2 = 10"; 
    const char S3[10] = "S3 = 11"; 

    int num,num1,num2,num3,num4;
    printf("\n%s",S0);
    printf("\nEntrada -> ");
    scanf("%d", &num);

    while (num == 1) {
        printf("\n%s", S0); 
        
        printf("\nEntrada -> ");
        scanf("%d", &num2);
        
        num = num2; 
    }
    if(num == 0){

            printf("\n%s",S1);
            printf("\nEntrada -> ");
            scanf("%d", &num);

            if (num == 1)
            {
                printf("\n%s",S2);

                printf("\nEntrada -> ");
                scanf("%d", &num);
                while(num == 1)
                {
                    printf("\nEntrada -> ");
                    scanf("%d", &num3);
            
                    num = num3; 
                    printf("\n%s",S2);
                }
                if (num == 0)       
                {
                                       //Estado 3

                    printf("\n%s",S3);
                    printf("\nEntrada -> ");
                    scanf("%d", &num);

                    while(num == 1)
                    {
                        printf("\nEntrada -> ");
                        scanf("%d", &num4);
                
                        num = num4; 
                        printf("\n%s",S3);
                    }

                    if (num == 0)
                    {
                        printf("\n%s",S1);
                    }
                    

                }else if(num == 0){
                    printf("\n%s",S0);
                }       
            }else if(num == 0){
                
                    //Estado 3

                    printf("\n%s",S3);
                    printf("\nEntrada -> ");
                    scanf("%d", &num);

                    while(num == 1)
                    {
                        printf("\nEntrada -> ");
                        scanf("%d", &num4);
                
                        num = num4; 
                        printf("\n%s",S3);
                    }

                    if (num == 0)
                    {
                        printf("\n%s",S1);
                    }
                    

            }else if(num == 0){
                printf("\n%s",S0);
            }
        return 0;
    }
       

   
}
