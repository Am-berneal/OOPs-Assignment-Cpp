#include<iostream>
using namespace std;

class Time {
    int h, m, s;
public:
    Time(int h = 0, int m = 0, int s = 0){
        this -> h = h;
        this -> m = m;
        this -> s = s;
    }

    Time operator+(Time t) {
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m + temp.s/60;
        temp.s%=60;
        temp.h = h + t.h + temp.m/60;
        temp.m%=60;
        return temp;
    }

    void show() {
        cout << "Time : " << h << ":" << m << ":" << s << endl;
    }
};

int main() {
    Time t1(10,12,4), t2(12,54,32);
    Time t3;
    t3 = t1 + t2;
    t3.show();

    return 0;
}