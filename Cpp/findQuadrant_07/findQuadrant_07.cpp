/*7. Дефинирайте функция, която получава два аргумента.
Те съответстват на координатите на точка в декартовата координатна система.
Функцията трябва да връща като резултат квадранта, в който се намира точката.
(Пример: вход: 2.5 , 5  -> изход: 1 или ,,first quadrant’’ под формата на текст.
Ако точката е с координати х=0 и у=0, то функцията да върне 0 или ,,center’’ съответно).*/

#include <iostream>
#include <string>

using namespace std;

string findQuadrant(double x, double y);

int main()
{
    // Примери за извикване на функцията
    cout << findQuadrant(2.5, 5) << endl;  // Пример за точка в първи квадрант
    cout << findQuadrant(-3, 4.5) << endl; // Пример за точка във втори квадрант
    cout << findQuadrant(-2, -1) << endl;  // Пример за точка в трети квадрант
    cout << findQuadrant(1, -3.5) << endl; // Пример за точка в четвърти квадрант
    cout << findQuadrant(0, 0) << endl;    // Пример за център

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
        // Ако точката е на координатна ос
        return "on axis";
    }
}