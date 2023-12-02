/*�������� ������� ��� ��������� bool checkSymbol(const char* , char ),
����� ����� true ��� �������� ������ � ������� � ��������� ���, ��������� false ��� �� � �������.*/

#include <iostream>

using namespace std;

bool checkSymbol(const char* str, char target) {
    while (*str != '\0') {
        if (*str == target) {
            return true;
        }
        ++str;
    }

    return false;
}

int main()
{
    const char* myString = "Hello, World!";
    char targetSymbol = 'm';

    if (checkSymbol(myString, targetSymbol)) {
        cout << "The symbol '" << targetSymbol << "' is found." << endl;
    }
    else {
        cout << "The symbol '" << targetSymbol << "' is not found." << endl;
    }

    return 0;
}