/*1. Реализирайте програма, която позволява на потребителя да въведе 3 числа (a,b,c ) и проверява
дали те отговарят на страните на реален правоъгълен триъгълник (дали a,b,c са питагорова тройка?).
След въвеждането, програмата да връща съответно съобщение дали има или няма триъгълник с посочените страни.*/

#include <iostream>

using namespace std;

bool isTirangle(int a, int b, int c)
{
    if (a * a + b * b == c * c)
    {
        return true;
    }

    return false;
}

int main()
{
    if (isTirangle(3, 4, 5))
    {
        cout << "There is a triangle\n";
    }
    else
    {
        cout << "There is not a triangle\n";
    }
}