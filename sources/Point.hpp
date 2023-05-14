namespace ariel
{
    class Point
    {
    private:
        double x_;
        double y_;

    public:
        Point(double x, double y) : x_(x), y_(y) {}
        double distance(Point point) const;
        double getx() const;
        double gety() const;
        void print() const;

        Point moveTowards(const Point &source, const Point &destination, double distance);
    };
}