namespace ariel
{
    class Point
    {
    private:
        double posX_;
        double posY_;

    public:
        Point(double posX, double posY);
        double distance(Point point) const;
        double getX() const;
        double getY() const;
        void print() const;
        Point moveTowards(const Point &source, const Point &destination, double distance);
    };
}