/*����������� ������� �� ����� ���, ����� ������ 2 ����� �
����� true(1) ��� ����� �� ��� � 40 � ������ �� � ��-����� �� 500.*/

#include <iostream>

using namespace std;

bool checkCondition(int num1, int num2) {
    return ((num1 == 40 || num2 == 40) && (num1 + num2 < 500));
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (checkCondition(a, b)) {
        cout << "The condition is met: true (1)\n";
    }
    else {
        cout << "The condition is not met: false (0)\n";
    }

    return 0;
}