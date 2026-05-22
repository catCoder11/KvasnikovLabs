#ifndef POINT_H 
#define POINT_H
#include <array>
using namespace std;

class Point {
    private:
    double x,y;
    
    public:
    Point();
    Point(double new_x, double new_y);

    void setCords(double new_x, double new_y);
    array<double, 2> getCords();

    void print();
    double distanceToOrigin();
};

#endif