/*12. Дефинирайте функция, която приема две числа връща true
ако последните цифри на двете числа са равни (пример: вход: 12, 522 ->изход: true).*/

#include <iostream>

using namespace std;

bool lastDigitsEqual(int number1, int number2) {
    int lastDigit1 = number1 % 10;
    int lastDigit2 = number2 % 10;

    return lastDigit1 == lastDigit2;
}

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (lastDigitsEqual(num1, num2)) {
        cout << "The last digits of the two numbers are equal.\n";
    }
    else {
        cout << "The last digits of the two numbers are not equal.\n";
    }

    return 0;
}