/*1. ������������ ��������, ����� ��������� �� ����������� �� ������ 3 ����� (a,b,c ) � ���������
���� �� ��������� �� �������� �� ������ ����������� ���������� (���� a,b,c �� ���������� ������?).
���� �����������, ���������� �� ����� ��������� ��������� ���� ��� ��� ���� ���������� � ���������� ������.*/

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