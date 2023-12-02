/*7. ����������� �������, ����� �������� ��� ���������.
�� ������������ �� ������������ �� ����� � ����������� ����������� �������.
��������� ������ �� ����� ���� �������� ���������, � ����� �� ������ �������.
(������: ����: 2.5 , 5  -> �����: 1 ��� ,,first quadrant�� ��� ������� �� �����.
��� ������� � � ���������� �=0 � �=0, �� ��������� �� ����� 0 ��� ,,center�� ���������).*/

#include <iostream>
#include <string>

using namespace std;

string findQuadrant(double x, double y);

int main()
{
    // ������� �� ��������� �� ���������
    cout << findQuadrant(2.5, 5) << endl;  // ������ �� ����� � ����� ��������
    cout << findQuadrant(-3, 4.5) << endl; // ������ �� ����� ��� ����� ��������
    cout << findQuadrant(-2, -1) << endl;  // ������ �� ����� � ����� ��������
    cout << findQuadrant(1, -3.5) << endl; // ������ �� ����� � �������� ��������
    cout << findQuadrant(0, 0) << endl;    // ������ �� ������

    return 0;
}

string findQuadrant(double x, double y) {
    if (x == 0 && y == 0) {
        return "center";
    }
    else if (x > 0 && y > 0) {
        return "first quadrant";
    }
    else if (x < 0 && y > 0) {
        return "second quadrant";
    }
    else if (x < 0 && y < 0) {
        return "third quadrant";
    }
    else if (x > 0 && y < 0) {
        return "fourth quadrant";
    }
    else {
        // ��� ������� � �� ����������� ��
        return "on axis";
    }
}