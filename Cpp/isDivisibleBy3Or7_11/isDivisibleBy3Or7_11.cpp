/*11. Дефинирайте функция, която према число и връща true ако то се дели точно на 3 или на 7*/

#include <iostream>

using namespace std;

bool isDivisibleBy3Or7(int number) {
    return (number % 3 == 0) || (number % 7 == 0);
}

int main()
{
    int num1 = 21;  // Се дели точно на 3
    int num2 = 14;  // Се дели точно на 7
    int num3 = 10;  // Не се дели нито на 3, нито на 7

    cout << num1 << " is divisible by 3 or 7: " << boolalpha << isDivisibleBy3Or7(num1) << endl;
    cout << num2 << " is divisible by 3 or 7: " << boolalpha << isDivisibleBy3Or7(num2) << endl;
    cout << num3 << " is divisible by 3 or 7: " << boolalpha << isDivisibleBy3Or7(num3) << endl;

    return 0;
}