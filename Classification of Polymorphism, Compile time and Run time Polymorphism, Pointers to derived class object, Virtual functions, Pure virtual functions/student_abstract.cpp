#include<iostream>
using namespace std;

class Student {
public:
    virtual void getdata() = 0;
    virtual void display() = 0;
};

class Engineering : public Student {
    int marks;
public:
    void getdata() {
        marks = 56;
    }

    void display() {
        cout << "Engineering student marks = " << marks << endl;
    }
};

class Medicine : public Student {
    int marks;
public:
    void getdata() {
        marks = 39;
    }

    void display() {
        cout << "Medicine Student Marks = " << marks << endl;
    }
};

class Science : public Student {
    int marks;
    public:
    void getdata() {
        marks = 87;
    }

    void display() {
        cout << "Science Student Marks = " << marks << endl;
    }
};

int main() {
    Student *s[3];
    Engineering e;
    Medicine m;
    Science sc;

    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    for(int i = 0; i < 3; i++){
        s[i]->getdata();
        s[i]->display();
    }
    
    return 0;
}