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

/**
 * @brief Simple CLI interface to perform simple mathematical operations
*/
int main() {
    int option;// to use in the switch for menu

    printf("This is a calculator capable of performing the following operations:\n");
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

void Menu() {
    printf("========= Menu Options: ============\n");
    printf("1. Sum\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
    printf("5. Compare\n");
    printf("6. Exit\n");
    printf("====================================\n");
    printf("Choose an option (1-6. Example= 5): ");
}


//ALL OPERATIONS WILL HAVE PRECISION POINT e^-3 FOR THIS ASSIGNMENT

void add() {
    float input1, input2;

    printf("Enter two numbers to add: (separated by white spaces or hit enter after each)");
    scanf("%f %f", &input1, &input2);

    float sum = input1 + input2;

    //first set's the format and then pass the variables (if needed)
    printf("%.3f + %.3f = %.3f\n\n", input1, input2, sum);  
    //%.3f floating with 3 decimal places
}

void subtract() {
    printf("Inside subtract function.\n");
    float input1, input2;

    printf("Enter two numbers to subtract: (separated by white spaces or hit enter after each)");
    scanf("%f %f", &input1, &input2);

    float rest = input1 - input2;
    printf("%.3f - %.3f = %.3f\n\n", input1, input2, rest);
    
}

void divide() {
    float tolerance = 1e-3;

    float divisor, dividend, quotient;
    printf("Enter numerator and denominator, in that order.\n");
    printf("You can use white space or enter to separate different inputs\n");
    printf("Your Input: ");
    scanf("%f %f", &dividend, &divisor);

    if(divisor - tolerance > 0){
        //DO THE DIVISION
        quotient = dividend/divisor;
        printf("%.3f / %.3f = %.3f\n\n", dividend, divisor, quotient);
    }
    else{
        printf("ERROR. Denominator cannot be zero.\n");
    }
    
 
}

void multiply() {
    printf("Inside multiply function.\n");
    float input1, input2;

    printf("Enter two numbers to multiply: (separated by white spaces or hit enter after each)");
    scanf("%f %f", &input1, &input2);

    float prod = input1 * input2;
    printf("%.3f * %.3f = %.3f\n\n", input1, input2, prod);
   
}

void compare(){
    printf("we're inside compare()\n");
    float input1, input2;

    printf("Enter two numbers to compare: (separated by white spaces or hit enter after each)");
    scanf("%f %f", &input1, &input2);

    if(input1 > input2){
        printf("%.3f > %.3f \n\n", input1, input2);
    }

    else{
        printf("%.3f < %.3f \n\n", input1, input2);
    
    }
    
}
