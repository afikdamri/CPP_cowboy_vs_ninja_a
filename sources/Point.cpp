#include "Point.hpp"
#include <iostream>
#include <cmath>
using namespace std;

namespace ariel
{

    Point::Point(double x, double y) : x_(x), y_(y) {}

    double Point::getx() const { return x_; }

    double Point::gety() const { return y_; }

    double Point::distance(Point point) const
    {
        double distance = pow(point.x_ - x_, 2) + pow(point.y_ - y_, 2);
        distance = sqrt(distance);
        return distance;
    }

    void Point::print() const
    {
        cout << "(" << x_ << "," << y_ << ")" << endl;
    }

    Point moveTowards(const Point &source, const Point &destination, double distance)
    {
        double dx = destination.getx() - source.getx();
        double dy = destination.gety() - source.gety();
        double currentDistance = source.distance(destination);

        if (currentDistance <= distance){return destination;}

        double ratio = distance / currentDistance;
        double newX = source.getx() + (dx * ratio);
        double newY = source.gety() + (dy * ratio);

        return Point(newX, newY);
    }

}