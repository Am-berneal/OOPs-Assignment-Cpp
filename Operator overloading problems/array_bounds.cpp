#include<iostream>
using namespace std;

class Array{
    int arr[5];
    public:
    int &operator[](int index){
        if(index < 0 || index >=5){
            exit(0);
        }
        return arr[index];
    }
};

int main(){
    Array arr;
    for(int i=0; i<5; i++){
        arr[i] = i * 10;
    }

    cout << arr[3] << endl;
    cout << arr[10] << endl; //Error
}