/* 2. ������������ ��������, ����� ��������� �� ����������� �� ������ 3 �����.
���� �����������, ���������� ������ �� ����� ���-�������� �� ����� �����.
(��� ��� ��������� �� �������� 24, 24, 8, �� � ���������� �� �� ������ 24 ���� ������).
cout << maxNumber(10, 10, 5) << endl << maxNumber(5, 3, 12) << endl << maxNumber(38, 60, 12);*/

#include <iostream>

using namespace std;

int maxNumber(int a, int b, int c)
{
	int currentMax = a;

	if (b > currentMax) {
		currentMax = b;
	}
	if (c > currentMax) {
		currentMax = c;
	}

	return currentMax;
}


int main()
{
	cout << "Enter 3 digits: ";
	int first, second, third;
	cin >> first >> second >> third;
	cout << maxNumber(first, second, third);

	return 0;
}