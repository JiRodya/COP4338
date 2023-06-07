#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

/**
 * @brief Performs basic Mathematical addition. (allows float values)
 * @details reads 2 numbers from the user separated by spaces, and adds them. Then performs the addition,
 * and shows the result.
 * Program uses e^-3 precision points
 */
void add() {
    float num1, num2;
    char input[100];

    printf("Enter two numbers to add (separated by white spaces)\n");
    printf("Your Input: ");
    fgets(input, sizeof(input), stdin);

    if(sscanf(input,"%f %f", &num1, &num2)!=2) //failed to read any of the numbers
    {
        printf("Invalid input. Please enter two numbers separated by a space\n");
    }
    else //both numbers were extracted correctly
    {
        float sum = num1 + num2;
        //first set's the format and then pass the variables (if needed)
        printf("%.3f + %.3f = %.3f\n\n", num1, num2, sum);
        //%.3f floating with 3 decimal places
    }
}

/**
 * @brief Performs basic Mathematical Subtraction. (allows float values)
 * @details reads 2 numbers from the user separated by spaces, and performs subtraction (first - second). It also outputs
 * the result with the format first - second = result.
 * Program uses e^-3 precision points
 */
void subtract() {
    float num1, num2;
    char input[100];

    printf("Enter two numbers to subtract (separated by white spaces ) \n");
    printf("Your Input: ");
    fgets(input,sizeof(input),stdin);

    if(sscanf(input,"%f %f", &num1, &num2)!=2){
        printf("Invalid input. Please enter two numbers separated by a space\n");
    }
    else{
        float rest = num1 - num2;
        printf("%.3f - %.3f = %.3f\n\n", num1, num2, rest);
    }


    
}

/**
 * @brief Performs basic Mathematical Division. (allows float values)
 * @details reads 2 numbers from the user separated by spaces, and performs division (first/second). It also outputs
 * the result with the format first/second = result.
 * Program uses e^-3 precision points and checks division by zero
 */
void divide() {
    //variables
    float tolerance = 1e-3;
    float divisor, dividend, quotient; //nums
    char input [100];

    //GET INPUT
    printf("Enter numerator and denominator (separated by white spaces), in that order.\n");
    printf("Your Input: ");
    fgets(input,sizeof (input),stdin);

    //HANDLE INPUT (CHECK IF VALID)
    if(sscanf(input,"%f %f", &dividend, &divisor)!=2){ //NOT VALID
        printf("Invalid input. Please enter two numbers separated by a space. \n");
    }
    else{ //VALID
        if(divisor - tolerance > 0){
            //DO THE DIVISION
            quotient = dividend/divisor;
            printf("%.3f / %.3f = %.3f\n\n", dividend, divisor, quotient);
        }
        else{
            printf("ERROR. Denominator cannot be zero.\n");
        }
    }
}

/**
 * @brief Performs basic Mathematical Multiplication. (allows float values)
 * @details reads 2 numbers from the user separated by spaces, and performs multiplication . It also outputs
 * the result with the format first * second = result.
 * Program uses e^-3 precision points
 */

void multiply() {
    //variables
    float input1, input2;
    char input [100];

    //GET INPUT
    printf("Enter two numbers to multiply: (separated by white spaces or hit enter after each)\n");
    printf("Your input: ");
    fgets(input, sizeof (input), stdin);

    //HANDLE INPUT
    if(sscanf(input,"%f %f", &input1, &input2)!=2){
        printf("Invalid input. Please enter two numbers separated by a space. \n");
    }
    else{
        float prod = input1 * input2;
        printf("%.3f * %.3f = %.3f\n\n", input1, input2, prod);
    }
}

/**
 * @brief Compares 2 numbers
 * @details Given 2 numbers (form the user) program will compare them and show print the result following the format
 * first > second, or first < second.
 * Allows floating points, but precision will be e^-3
 */
void compare(){
    //variables
    float input1, input2;
    float precision = 1e-3;//to check for the equal case
    char input [100];

    //GET INPUT
    printf("Enter two numbers to compare: (separated by white spaces or hit enter after each)\n");
    printf("Your input: ");
    fgets(input,sizeof (input), stdin);

    if(sscanf(input,"%f %f", &input1, &input2)!=2){
        printf("Invalid input. Please enter two numbers separated by a space. \n");
    }
    else{
        //check first for equal case. With floating numbers we might always get a true for '<' or '>'
        if(fabs(input1 - input2) <= precision){
            printf("%.3f = %.3f (with a precision of e^-3) \n \n", input1, input2);
        }

        else if(input1 > input2){
            printf("%.3f > %.3f \n\n", input1, input2);
        }

        else if (input1 < input2){
            printf("%.3f < %.3f \n\n", input1, input2);

        }
    }
}
