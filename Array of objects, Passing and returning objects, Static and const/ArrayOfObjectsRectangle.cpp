#include<iostream>
using namespace std;

class Rectangle{
    float length, breadth;

public:
    void setData(int l, int b){
        length=l;
        breadth=b;
    }

    float area(){
        return length*breadth;
    }

    void display(int i){
        cout<<"Area of Rectangle "<<i+1<<"="<<area()<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter number of Rectangles: ";
    cin>>n;

    Rectangle r[n]; //Array objects

    for(int i=0;i<n;i++){
        float l,b;
        cout<<"\nEnter length & breadth of "<<i+1<<" Rectangle :";
        cin>>l>>b;
        r[i].setData(l,b);
    }

     cout << "\n--- Areas of Rectangles ---\n";
     for(int i=0;i<n;i++){
        r[i].display(i);
     }
}