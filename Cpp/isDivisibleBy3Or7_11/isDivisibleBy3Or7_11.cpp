/*11. ����������� �������, ����� ����� ����� � ����� true ��� �� �� ���� ����� �� 3 ��� �� 7*/

#include <iostream>

using namespace std;

bool isDivisibleBy3Or7(int number) {
    return (number % 3 == 0) || (number % 7 == 0);
}

int main()
{
    int num1 = 21;  // �� ���� ����� �� 3
    int num2 = 14;  // �� ���� ����� �� 7
    int num3 = 10;  // �� �� ���� ���� �� 3, ���� �� 7

    cout << num1 << " is divisible by 3 or 7: " << boolalpha << isDivisibleBy3Or7(num1) << endl;
    cout << num2 << " is divisible by 3 or 7: " << boolalpha << isDivisibleBy3Or7(num2) << endl;
    cout << num3 << " is divisible by 3 or 7: " << boolalpha << isDivisibleBy3Or7(num3) << endl;

    return 0;
}