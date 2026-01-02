#include<iostream>
using namespace std;

class Test{
    float x;
    public:
    Test(float a){
        x = a;
    }

    operator float(){
        return x;
    }
};

int main() {
    Test t(12.4);
    float f = t;
    cout << f << endl;

    return 0;
}