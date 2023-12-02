/*!13. Дефинирайте функция, която получава като аргумент цяло число и
извежда редицата на Фибоначи до това въведено число. (например: вход: 10 -> изход: 0 1 1 2 3 5 8 13 21 34).*/

#include <iostream>

using namespace std;

void fibonacciSequence(int n) {
    int a = 0, b = 1, c;

    cout << a << " " << b << " ";

    for (int i = 2; i < n; ++i) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main()
{
    int userInput;
    cout << "Enter a number: ";
    cin >> userInput;

    fibonacciSequence(userInput);

    return 0;
}