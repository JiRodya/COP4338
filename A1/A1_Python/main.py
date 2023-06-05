def add(num1, num2):
    ans = int(num1) + int(num2)
    return ans


def sub(num1, num2):
    ans = int(num1) - int(num2)
    return ans


def mul(num1, num2):
    ans = int(num1) * int(num2)
    return ans


def div(num1, num2):
    ans = int(num1) / int(num2)
    return ans


def menu():

        options = input("What would you like to do: ").lower()

        if options == "add":
            num1 = input("Number 1: ")
            num2 = input("Number 2: ")

            ans = add(num1, num2)
            print(num1 + " + " + num2 + " = " + str(ans))

            menu()

        elif options == "subtract":
            num1 = input("Number 1: ")
            num2 = input("Number 2: ")

            ans = sub(num1, num2)
            print(num1 + " - " + num2 + " = " + str(ans))

            menu()

        elif options == "multiply":
            num1 = input("Number 1: ")
            num2 = input("Number 2: ")

            ans = mul(num1, num2)
            print(num1 + " * " + num2 + " = " + str(ans))

            menu()

        elif options == "divide":
            num1 = input("Number 1: ")
            num2 = input("Number 2: ")

            ans = div(num1, num2)
            print(num1 + " / " + num2 + " = " + str(ans))

            menu()

        elif options == "q":
            print("Quitting. ")

        else:
            print("Please select one of the options: ")
            menu()


print("Welcome to my simple calculator: ")
menu()

