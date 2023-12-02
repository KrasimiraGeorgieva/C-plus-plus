/*10. ����������� �������, ����� ������ ��� ����� � ����� true ��� ����� �� ��� � 40 ��� ������ ���� ���� 40.*/

#include <iostream>

using namespace std;

bool isSumOrEither40(int num1, int num2) {
    return (num1 == 40 || num2 == 40 || num1 + num2 == 40);
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (isSumOrEither40(a, b)) {
        cout << "Yes, the condition is met.\n";
    }
    else {
        cout << "No, the condition is not met.\n";
    }

    return 0;
}