#include<iostream>
using namespace std;

class Rectangle{
    int length, breadth;

public:
     // (a) Constructor with no parameters
    Rectangle(){
        length=0;
        breadth=0;
    }

    // (b) Constructor with two parameters
    Rectangle(int l, int b){
        l=length;
        b=breadth;
    }

    // (c) Constructor with one parameter
    Rectangle(int x){
        length=x;
        breadth=x;
    }

    // Function to calculate and return area
    int area(){
        return length * breadth;
    }
};

int main(){
    // Object with no parameters
    Rectangle r1;
    cout<< "Area of Rectangle with no parameter: " << r1.area() << endl;

    // Object with one parameters
    Rectangle r2(5);
    cout<< "Area of Rectangle with one parameter: " << r2.area() << endl;

    // Object with two parameters
    Rectangle r3(6,3);
    cout<< "Area of Rectangle with two parameter: " << r3.area() << endl;
}