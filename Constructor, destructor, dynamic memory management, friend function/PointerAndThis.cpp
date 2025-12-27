#include<iostream>
using namespace std;

class Sample{
    int x;
    public:
    void set (int x){
        this->x = x;  //this pointer
    }

    void show(){
        cout << "Value of x = " << x << endl;
    }
};

int main(){
    Sample obj;
    Sample *ptr=&obj; // Pointer to object

    obj.set(10); // Dot operator
    obj.show();

    ptr->set(20); // Arrow operator
    ptr->show();

    return 0;
}