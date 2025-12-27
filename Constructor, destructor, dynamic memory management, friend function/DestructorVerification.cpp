#include<iostream>
using namespace std;

class Demo{
public:
    Demo(){
        cout<<"Constructor is called\n";
    }

    // Destructor rules verified
    ~Demo() {
        cout << "Destructor called\n";
    }

    /*
    ~Demo(int x) {}      // ❌ No parameters allowed
    int ~Demo() {}       // ❌ No return type allowed
    ~Demo() {}           // ❌ Only one destructor allowed
    */
};

class DefaultDestructor {
public:
    void show() {
        cout << "Compiler provides default destructor\n";
    }
};

int main() {
    Demo d;
    DefaultDestructor obj;
    obj.show();
    return 0;
}
