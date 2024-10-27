class Wektor2D
{
private:
    double x; 
    double y; 
    public:
    Wektor2D(double x = 0, double y = 0)
    {
        this->x = x;
        this->y = y;

        
    }
    void setX(double a) { x = a; }

    void setY(int a) { y = a; }

     double getY()
    {

        
        return y;
    }
    double getX()
    {

        

        return x;
    }
 

    
};
Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    Wektor2D wynik;
    wynik.setX(w1.getX() + w2.getX());
    wynik.setY(w1.getY() + w2.getY());

    return wynik;
}
double operator*(Wektor2D w1, Wektor2D w2)
{
    double wynik;
    wynik = (w1.getX() * w2.getX()) + (w1.getY() * w2.getY());
    

    return wynik;
}
