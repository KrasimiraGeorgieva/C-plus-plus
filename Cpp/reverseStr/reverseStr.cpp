/* Програма, която позволява на потребителя да въведе текст. След въвеждането, програмата връща текста наобратно. */

#include <iostream>
#include <algorithm> 
#include <string>

using namespace std;


void reverseStr(string* text)
{
    int textLen = text->length();
    for (int i = 0; i < textLen / 2; i++)
    {
        swap((*text)[i], (*text)[textLen - i - 1]);
    }
}

int main()
{
    string inputText;
    cout << "Enter some text: ";
    getline(cin, inputText);
    reverseStr(&inputText);
    cout << inputText;

    return 0;
}
