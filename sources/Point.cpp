#include "Point.hpp"
#include <iostream>
#include <cmath>
using namespace std;

namespace ariel
{

    Point::Point(double posX, double posY) : posX_(posX), posY_(posY){}

    double Point::getX() const { return posX_; }

    double Point::getY() const { return posY_; }

    double Point::distance(Point point) const
    {
        double distance = pow(point.posX_ - posX_, 2) + pow(point.posY_ - posY_, 2);
        distance = sqrt(distance);
        return distance;
    }

    void Point::print() const
    {
        cout << "(" << posX_ << "," << posY_ << ")" << endl;
    }

    Point moveTowards(const Point &source, const Point &destination, double distance)
    {
        double dx = destination.getX() - source.getX();
        double dy = destination.getY() - source.getY();
        double currentDistance = source.distance(destination);

        if (currentDistance <= distance){return destination;}

        double ratio = distance / currentDistance;
        double newX = source.getX() + (dx * ratio);
        double newY = source.getY() + (dy * ratio);

        return Point(newX, newY);
    }

}