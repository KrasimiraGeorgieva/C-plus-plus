/*Напишете функция, която превръща всички малки букви от дадена дума в големи. */

#include <iostream>

using namespace std;

int textLen(char text[])
{
    int i = 0;
    for (; text[i] != '\0'; i++);
    return i;

}

char* toUpper(char text[])
{
    int len = textLen(text);
    for (int i = 0; i < len; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] -= ('a' - 'A');
        }
    }
    return text;
}

int main()
{
    char text[30];
    cin >> text;
    cout << toUpper(text);
}