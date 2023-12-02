/*5. Дефинирайте функция, която приема число и намира колко цифрено е то.
(Необходимо е като резултат само число отговарящо на тази дължина. Например, вход:5223, изход: 4)*/

#include <iostream>

using namespace std;

int numLen(int a)
{
    int len = 0;
    while (a != 0)
    {
        a /= 10;
        len++;
    }
    return len;
}

int main()
{
    cout << numLen(5224);
}