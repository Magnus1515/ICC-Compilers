#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char input[] = "x-2*y";
int currentPos = 0;

//Function that consume a character from the input string 
char getin() {
    return input[currentPos++];
}

//Function to check if the currenct character mathes the expected
bool equal(char expect) {
    if (input[currentPos] == expect) {
        currentPos++;
        return true;
    }
    return false;
}

int expr();
int term();
int factor();
int num();
int ident();

int expr() {
    int result = term();
    while (input[currentPos] == '+' || input[currentPos] == '-') {
        char op = getin();
        int right = term();
        if (op == '+') {
            result += right;
        } else {
            result -= right;
        }
    }

    return result;    
}

int term() {
    int result = factor();
    while (input[currentPos] == '*' || input[currentPos] == '/') {
        char op = getin();
        int right = factor();
        if (op == '*') {
            result *= right;
        } else {
            result /= right;
        }
    }
    return result;
}

int factor() {
    
    if (input[currentPos] >= '0' && input[currentPos] <= '9') {
        return num();
    } else {
        return ident();
    }
}

//Function that convert the input[currentPos] to number
int num() {
    // int result = input[currentPos] - '0';
    int result = input[currentPos] - '0';
    currentPos++;

    return result;
}

int ident() {
    if (input[currentPos] == 'x') {
        currentPos++;
        return 10;  
    } else if (input[currentPos] == 'y') {
        currentPos++;
        return 20;  
    }
    return 0;  
}
//Function to call our expr() and try it 
int main(void) {
    int result = expr();
    if (result == 10 - 2 * 20) {
        printf("Successful: Expression matches 'x-2*y'.\n");
    } else {
        printf("Error: Expression does not match 'x-2*y'.\n");
    }
    return 0;
}
