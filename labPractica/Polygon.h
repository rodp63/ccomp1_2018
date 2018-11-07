#include<iostream>

class Polygon
{
    public:
        Polygon(){width=0; height=0;}
        Polygon(int a, int b) : width(a), height(b) {}
        virtual double area (void){return 0;}
        //virtual double area (void)=0;
        void printarea(){
            std::cout<< this->area() <<std::endl;
        }
        void printvalues(){
            std::cout<<width<<" "<<height<<std::endl;
        }

    protected:
        int width, height;

};

class Rectangle : public Polygon
{
  //int width, height;
    public:
        Rectangle(int a,int b) : Polygon(a,b) {}
        double area(){
            return (width*height);
        }
};

class Triangle : public Polygon
{
    int width, height;
    public:
        Triangle(int a,int b) : Polygon(a,b) {}
        double area(){
            return (width*height)/2.0;
        }
};

class Circle : public Polygon
{
    int radio;
    public:
        Circle(int a) : radio(a) {}
        double area(){
            return (3.14*radio*radio);
        }
};

