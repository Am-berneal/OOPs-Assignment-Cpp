#include<iostream>
#include<cmath>
using namespace std;

// Right Angled Triangle
float Area(float base, float height) {
    return (base * height)/2;
}

// Equilateral Triangle
float Area(float side) {
    return sqrt(3) / 4 * side * side;
}

// Isosceles Triangle
float Area(float Equalside, float base, int dummy){
    int height = sqrt(Equalside * Equalside - base * base) / 4;
    return (base * height) / 2;
}

int main() {
    cout << "Area of the Equilateral Triangle = " << Area(15) << endl;
    cout << "Area of the Right Angled Triangle = " << Area(12,10) << endl;
    cout << "Area of the Isosceles Triangle = " << Area(15,12,0) << endl;
}