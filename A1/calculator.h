#ifndef CALCULATOR_H
#define CALCULATOR_H

enum Operations {
    Sum = 1,
    Rest,
    Div,
    Mult,
    Comp,
    Exit,
};

void Menu();
void add();
void subtract();
void divide();
void multiply();
void compare();

#endif  // CALCULATOR_H
