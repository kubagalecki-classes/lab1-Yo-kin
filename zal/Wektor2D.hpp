class Wektor2D
{
    public:
    Wektor2D()
    {
        x=0;
        y=0;
    }
    Wektor2D(double X, double Y)
    {
        x=X;
        y=Y;
    }
    void setX(int A) { x=A;}
    void setY(int A) { y=A;}
    double getX() {return x;}
    double getY() {return y;}
    
    double x;
    double y;
    
};


Wektor2D operator+(Wektor2D& w1, Wektor2D& w2)
{
    Wektor2D tmp=w1;
    tmp.x +=w2.x;
    tmp.y +=w2.y;
    return tmp;
}

double operator*(Wektor2D& w1, Wektor2D& w2)
{
    return w1.x*w2.x+w1.y*w2.y;
}
    
