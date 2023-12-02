/*8. Дефинирайте функция, която приема два параметъра ,,a’’ и ,,b’’.
Нека фунцкията намира лицето и периметъра на правоъгълник с тези страни ,,а‘‘ и ,,b’’.*/

#include <iostream>

using namespace std;

void calculateRectangleProperties(double a, double b, double& area, double& perimeter) {
     area = a * b;

    perimeter = 2 * (a + b);
}

int main()
{
    double sideA, sideB;

    cout << "Enter side a: ";
    cin >> sideA;

    cout << "Enter side b: ";
    cin >> sideB;

    double rectangleArea, rectanglePerimeter;

    calculateRectangleProperties(sideA, sideB, rectangleArea, rectanglePerimeter);

    cout << "Rectangle Area: " << rectangleArea << endl;
    cout << "Rectangle Perimeter: " << rectanglePerimeter << endl;

    return 0;
}