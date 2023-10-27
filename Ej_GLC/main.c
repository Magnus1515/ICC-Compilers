#include<stdio.h>
#include <string.h>
#include <stdbool.h>




//Expresion -> x-2*2

//Language:
//Expr -> Expr+Term| Expr-Term | Term
//Term -> Term*factor| Term-factor | factor
//factor -> num | ident
//num -> 0|1|2|3|4|5|6|7|8|9
//ident -> x|y

char input[] = "x-2*y";
int currentPos = 0;

char getin(){
  return input[currentPos++];
}

bool equal(char expect){
    if (input[currentPos] == expect){
        currentPos++;
        return true;
    }
    return false;
}


int expr(){
    int result = term();
    while(input[currentPos] == '+' || input[currentPos] == '-'){

    }
}


int term(){
    int result = factor();

    if(input[currentPos] == "*"){

    }

}

int factor(){


}

int num(){

}

int main(void) {

    printf("\n%c\n", input[1]);
    return 0;
}
