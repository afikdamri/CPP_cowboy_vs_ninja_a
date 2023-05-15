namespace ariel
{
    class Point
    {
    private:
        double posX_;
        double posY_;

    public:
        Point(double posX, double posY) : posX_(posX), posY_(posY) {}

        double distance(const Point &point) const
        {return 0.0;}

        double getX() const
        {return 0.0;}

        double getY() const
        {return 0.0;}

        void print() const{}
        Point moveTowards(const Point &source, const Point &destination, double distance)
        {return Point(0.0, 0.0);}
    };
}
