namespace ariel
{
    class Point
    {
    private:
        double posX_;
        double posY_;

    public:
        Point(double posX, double posY) : posX_(posX), posY_(posY) {}

        double static distance(const Point &point) 
        {return 0.0;}

        double static getX()
        {return 0.0;}

        double static getY()
        {return 0.0;}

        void static print(){}
        Point static moveTowards(const Point &source, double distance, const Point &destination)
        {return Point(0.0, 0.0);}
    };
}
