#include <array>
#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point() {
    x = 0;
    y = 0;
}
Point::Point(double new_x, double new_y) {
    x = new_x;
    y = new_y;
}
array<double, 2> Point::getCords() {
    return {x,y};
}
void Point::setCords(double new_x, double new_y) {
    x = new_x;
    y = new_y;
}

void Point::print() {
    cout << "(" << x << "," << y << ")" << endl;
}

double Point::distanceToOrigin() {
    return sqrt(pow(x,2) + pow(y,2));
}
