/*3. ������������ ��������, ����� ������ ����� � ��������� ��������� �� ��������� �� ���� ����� �����������
(���������: ������ ����� �� ������ ���-����� ����������� ������).*/

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number ";
    cin >> number;

    cout << "Multiplication Table with " << number << ":\n";
    for (int row = 1; row <= number; ++row) {
        for (int col = 1; col <= number; ++col) {
            cout << row << "*" << col << "=" << row * col << "\t"; 
        }
        cout << endl; 
    }

    return 0;
}