/*5. ����������� �������, ����� ������ ����� � ������ ����� ������� � ��.
(���������� � ���� �������� ���� ����� ���������� �� ���� �������. ��������, ����:5223, �����: 4)*/

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