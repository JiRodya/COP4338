#include iostream
#include string

using namespace std;

int add(int num1, int num2) {
    int ans = num1 + num2;
    return ans;
}

int sub(int num1, int num2) {
    int ans = num1 - num2;
    return ans;
}

int multiply(int num1, int num2) {
    int ans = num1  num2;
    return ans;
}

int division(int num1, int num2) {
    int ans = num1  num2;
    return ans;
}

void menu() {
    cout  What would you like to do (add, subtract, multiply, divide, q) n;
    string operation;
    int num1, num2;
    getline(cin, operation);


    if (operation == add) {
        cout  Number 1   endl;
        cin  num1;
        cout  Number 2   endl;
        cin  num2;
        int sum = add(num1, num2);

        cout  num1   +   num2   =   sum  endl;

        menu();
    }

    else if (operation == subtract) {
        cout  Number 1   endl;
        cin  num1;
        cout  Number 2   endl;
        cin  num2;
        int diff = sub(num1, num2);

        cout  num1   -   num2   =   diff  endl;

        menu();
    }

    else if (operation == multiply) {
        cout  Number 1   endl;
        cin  num1;
        cout  Number 2   endl;
        cin  num2;
        int mul = multiply(num1, num2);

        cout  num1      num2   =   mul  endl;

        menu();
    }

    else if (operation == divide) {
        cout  Number 1   endl;
        cin  num1;
        cout  Number 2   endl;
        cin  num2;
        int div = division(num1, num2);

        cout  num1      num2   =   div  endl;

        menu();
    }

    else if (operation == q) {
        cout  Quitting. . .n;
    }

    else {
        cout  Please select one of the options n;
        menu();
    }
}

int main()
{
    cout  Welcome to my simple calculator! n;
    menu();

    return 0;
}

