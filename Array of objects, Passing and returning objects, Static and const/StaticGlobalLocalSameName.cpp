#include<iostream>
using namespace std;

/* ---------- Global variable ---------- */
int value = 100;

class Demo{
public:
    static int value; // static public member variable
};

/* ---------- Static member definition ---------- */
int Demo::value=200;

int main(){
    int value=300; // local variable

    cout<<"Local variable = "<<value<<endl;
    cout<<"Global variable = "<<::value<<endl;
    cout<<"Static class variable = "<<Demo::value<<endl;


    return 0;
}