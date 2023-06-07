#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculator.h"


/**
 * @brief Simple CLI interface to perform simple mathematical operations
*/
int main() {
    int option;// to use in the switch for menu

    printf("This is a calculator capable of performing the following operations with e^-3 precision:\n");
    printf("Addition, Subtraction, Division, Multiplication, Comparison.\n");

    do {
        Menu();

        //ONLY WILL BE 1 IF A NUMBER WAS ENTERED
        if (scanf("%d", &option) != 1) {
            printf("Invalid input. Please enter an option from the menu.\n");
            while (getchar() != '\n') {}  // Clear the input buffer
        }

        //ONCE HERE ONLY NUMBERS WERE ENTERED
        else {
            switch (option) {
                case Sum:
                    printf("ADDING NUMBERS.\n");
                    while (getchar() != '\n') {} 
                    add();
                    break;

                case Rest:
                    printf("SUBTRACTING NUMBERS.\n");
                    while (getchar() != '\n') {} 
                    subtract();
                    break;

                case Div:
                    printf("DIVIDING NUMBERS.\n");
                    while (getchar() != '\n') {} 
                    divide();
                    break;

                case Mult:
                    printf("MULTIPLYING NUMBERS.\n");
                    while (getchar() != '\n') {} 
                    multiply();
                    break;

                case Comp:
                    printf("COMPARING NUMBERS\n");
                    while (getchar() != '\n') {} 
                    compare();
                    break;

                case Exit:
                    printf("Exiting...\n");
                    break;

                default:
                    printf("Option not recognized. Please try again.\n");
                    break;
            }

            //while (getchar() != '\n') {}  // Clear the input buffer
        }
    } while (option != Exit);

    return 0;
}

