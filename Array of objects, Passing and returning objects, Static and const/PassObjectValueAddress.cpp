#include <iostream>
using namespace std;

class Sample {
public:
    int x;

    void set(int val) {
        x = val;
    }

    void display() {
        cout << "Value of x = " << x << endl;
    }
};

/* ---------- Pass-by-Value ---------- */
Sample modifyByValue(Sample obj) {
    obj.x = obj.x + 10;   // modifies copy
    return obj;          // return modified copy
}

/* ---------- Pass-by-Address ---------- */
Sample modifyByAddress(Sample *obj) {
    obj->x = obj->x + 20;  // modifies original object
    return *obj;           // return modified object
}

int main() {
    Sample s1, s2, s3;

    s1.set(5);

    cout << "Original Object:" << endl;
    s1.display();

    /* Pass-by-Value */
    s2 = modifyByValue(s1);
    cout << "\nAfter Pass-by-Value:" << endl;
    s2.display();
    cout << "Original object after pass-by-value:" << endl;
    s1.display();

    /* Pass-by-Address */
    s3 = modifyByAddress(&s1);
    cout << "\nAfter Pass-by-Address:" << endl;
    s3.display();
    cout << "Original object after pass-by-address:" << endl;
    s1.display();

    return 0;
}
