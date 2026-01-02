#include<iostream>
using namespace std;

class Test{
    float x;
public:
    Test(float a){
        x = a;
    }

    void show() {
        cout << "The value of x = " << x << endl;
    }
};

int main() {
    float f = 5.5;
    Test t = f;
    t.show();
}