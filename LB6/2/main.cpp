#include <iostream>
#include <array>
#include <clocale>
#include <Windows.h>
#include "Point.h"

using namespace std;
int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, ".UTF8");
    Point p1;
    Point p2(10, -15.4);

    p1.print();
    p2.print();
    cout << "Смена значений:" << endl;
    array<double, 2> arr = p2.getCords();
    p1.setCords(arr[0], arr[1]);
    p2.setCords(3,4);

    p1.print();
    p2.print();

    cout << "Расстояние до (0,0): " << endl;
    cout << p1.distanceToOrigin() << endl;
    cout << p2.distanceToOrigin() << endl;
    return 0;
}