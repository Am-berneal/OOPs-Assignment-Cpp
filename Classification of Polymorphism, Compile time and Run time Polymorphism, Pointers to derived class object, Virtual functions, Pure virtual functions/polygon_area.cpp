#include<iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_value (int w, int h){
        width = w;
        height = h;
    }

    virtual int calculated_area() = 0; // Pure virtual function
};

class Rectangle : public Polygon {
public:
    int calculated_area() {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    int calculated_area() {
        return (width * height)/2;
    }
};

int main() {
    Polygon *p;
    Rectangle r;
    Triangle t;

    r.set_value(10,5);
    t.set_value(10,5);

    p = &r;
    cout << "Area of the Rectangle = " << p->calculated_area() << endl;

    p = &t;
    cout << "Area of the Triangle = " << p->calculated_area() << endl;
    return 0;
}