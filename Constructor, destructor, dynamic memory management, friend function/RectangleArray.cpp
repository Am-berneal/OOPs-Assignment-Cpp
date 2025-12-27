#include<iostream>
using namespace std;

class Rectangle{
    int length, breadth;

public:
    // Constructor with no default arguments
    Rectangle(int l=0, int b=0){
        length=l;
        breadth=b;
        cout<<"Constructor is called with length = " << length << ", breadth = "<<breadth<<endl;
    }

    // Function used to calculate area
    int area(){
        return length * breadth;
    }

    // Destructor
    ~Rectangle(){
        cout<<"Destructor called for Rectangle with area = "<<area()<<endl;
    }
};

int main(){
    // Array of Rectangle objects using different constructor calls
    Rectangle r[3] = {
        Rectangle(),        // No parameter (0,0)
        Rectangle(5),       // One parameter (5,0)
        Rectangle(4, 6)     // Two parameters (4,6)
    };

    cout << "\nAreas of Rectangles:\n";

    for (int i = 0; i < 3; i++) {
        cout << "Rectangle " << i + 1 << " Area = "
             << r[i].area() << endl;
    }

    return 0;

}