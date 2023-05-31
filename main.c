#include <stdio.h>

enum Operations {
    Sum = 1,
    Rest,
    Div,
    Mult,
    Comp,
    Exit,
};

// FUNCTION PROTOTYPES
void Menu();
void add();
void subtract();
void divide();
void multiply();
void compare();

int main() {
    int input;

    printf("This is a calculator capable of performing the following operations:\n");
    printf("Addition, Subtraction, Division, and Multiplication.\n");

    do {
        Menu();

        if (scanf("%d", &input) != 1) {
            printf("Invalid input. Please enter an option from the menu.\n");
            while (getchar() != '\n') {}  // Clear the input buffer
        } else {
            switch (input) {
                case Sum:
                    printf("We are in Addition.\n");
                    add();
                    break;

                case Rest:
                    printf("We are in Subtraction.\n");
                    subtract();
                    break;

                case Div:
                    printf("We are in Division.\n");
                    divide();
                    break;

                case Mult:
                    printf("We are in Multiplication.\n");
                    multiply();
                    break;
                case Comp:
                    printf("we are in switch, comp\n"); 
                    compare();
                    break;

                case Exit:
                    printf("Exiting...\n");
                    break;

                default:
                    printf("Option not recognized. Please try again.\n");
                    break;
            }

            while (getchar() != '\n') {}  // Clear the input buffer
        }
    } while (input != Exit);

    return 0;
}

void Menu() {
    printf("========= Menu Options: ============\n");
    printf("1. Sum\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
    printf("5. Compare\n");
    printf("6. Exit\n");
    printf("====================================\n");
    printf("Choose an option: ");
}

void add() {
    float input1, input2;

    printf("Enter two numbers: (separated by white spaces or hit enter after each)");
    scanf("%f %f", &input1, &input2);

    float sum = input1 + input2;
    printf("%.2f + %.2f = %.2f\n\n", input1, input2, sum);

    //while (getchar() != '\n') {}  // Clear the input buffer
}

void subtract() {
    printf("Inside subtract function.\n\n");
    //while (getchar() != '\n') {}  // Clear the input buffer
}

void divide() {
    printf("Inside divide function.\n\n");
   // while (getchar() != '\n') {}  // Clear the input buffer
}

void multiply() {
    printf("Inside multiply function.\n\n");
   // while (getchar() != '\n') {}  // Clear the input buffer
}

void compare(){
    printf("we're inside compare()\n");
}
