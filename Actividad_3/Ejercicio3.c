#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int input;
int number[100];
int isOut = 0;
char response[4];
int counter = 0;

void resultMessage(int input, int counter){
    number[counter] = input;
    for (int i = 1; i < counter+1; i++){
        printf("%d", number[i]);
    }
    printf("\n");
}

int exitMessage(){
    while (true){
        printf("You want to leave? (yes/no): ");
        scanf("%s", response);
        if (strcmp("yes",response) == 0) {
            return 1;
        } else if (strcmp("no", response) == 0) {
            return 0;
        }
        printf("Invalid response. Try again\n");
    }
}

void getInput() {
    printf("Enter a Number: ");
    scanf("%d", &input);
}

int main()
{
    while (true) {
        getInput();
        if (input == 0 && counter >= 1) {
            counter++;
            resultMessage(input, counter);
            isOut = exitMessage();
        }
        else if (input == 0) {
            counter++;
            resultMessage(input, counter);
            printf("Number Sequence Finished\n");break;
        }
        else if (input >= 1 | input <= 9) {
            counter++;
            resultMessage(input, counter);
            isOut = exitMessage();
            
        }
        else {printf("Invalid Input. Valid Inputs are 0 and 9\n");}
        if (isOut == 1){printf("Number Sequence Finished\n");break;}
    }
    return 0;
}