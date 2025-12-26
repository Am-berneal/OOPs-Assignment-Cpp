#include<iostream>
using namespace std;

/* Inline function to calculate cube */
inline int cube(int x){
    return x * x * x;
}

int main(){
    int num;

    cout<<"Enter the number: ";
    cin>>num;

    cout<<"Cube of "<<num<<"="<<cube(num)<<endl;

    return 0;
}