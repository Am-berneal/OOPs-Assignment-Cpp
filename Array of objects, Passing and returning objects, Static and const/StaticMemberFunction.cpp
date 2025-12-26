#include<iostream>
using namespace std;

class Demo{
    static int count;  // static data member

public:
    static void setCount(int x){
        x=count;  // static function can access static members
    }

    static void display(){
        cout<<"Count = "<<count<<endl;
    }
};


/* ---------- Static member definition ---------- */
int Demo::count=0;

int main(){
    Demo::setCount(10);  // calling static function using class name
    Demo::display();

    return 0;
}