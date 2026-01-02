#include<iostream>
using namespace std;

class Demo{
public:
    void Operator(int a, int b, int c){
        cout << "Sum = " << a + b + c << endl;
    }
};

int main() {
    Demo d;
    d.Operator(10,13,32);

    return 0;
}

