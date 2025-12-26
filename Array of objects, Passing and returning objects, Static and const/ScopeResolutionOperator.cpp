#include<iostream>  //(d) In-built Library
using namespace std;

/* ---------- (b) Global variable ---------- */
int x = 100;

class Demo{
public:
    static int count;  // (c) Static variable
    void show(); // (a) Function declared
};

/* ---------- (a) Member function defined outside class ---------- */
void Demo::show(){
    int x = 50;  //Local Variable
    cout<<"Local x = "<<x<<endl;
    cout<<"Global x = "<<::x<<endl;  // (b) global variable access
}

/* ---------- (c) Static member definition ---------- */
int Demo::count=10;


int main(){

     /* ---------- (d) Using namespace std ---------- */
     std::cout << "Demonstration of Scope Resolution Operator (::)\n"<<std::endl;

     Demo obj;
     obj.show();

     /* ---------- (c) Access static variable ---------- */
    cout << "Static count = " << Demo::count << endl;
}