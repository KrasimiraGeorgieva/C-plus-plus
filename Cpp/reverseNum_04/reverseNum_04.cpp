/*4. Дефинирайте функция, която приема число и връща същото това число наобратно. */

#include <iostream>

using namespace std;

int reversedNum(int a)
{
    int revNum = 0;
    int number = a;
    while (number != 0)
    {
        revNum *= 10;
        revNum += number % 10;
        number /= 10;
    }
    return revNum;
}

int main()
{
    cout << reversedNum(-123);
}