#include<iostream>
#include<cmath>
using namespace std;

class Polar{
    float r, theta;
    public:
    Polar(float r, float t){
        this -> r = r;
        theta = t;
    }

    float getR(){
        return r;
    }
    float getTheta(){
        return theta;
    }
};

class Cartesian{
    int x, y;
    public:
    Cartesian(Polar p){
        x = p.getR() * cos(p.getTheta());
        y = p.getR() * sin(p.getTheta()); 
    }

    void show(){
        cout << "x = " << x << " , y = " << y << endl;
    }
};

int main(){
    Polar p(5,3.14);
    Cartesian c = p;
    c.show();

    return 0;
}