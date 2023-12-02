/* 2. Реализирайте програма, която позволява на потребителя да въведе 3 числа.
След въвеждането, програмата трябва да върне най-голямото от трите числа.
(Ако има повтарящи се например 24, 24, 8, то е достатъчно да се изведе 24 само веднъж).
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