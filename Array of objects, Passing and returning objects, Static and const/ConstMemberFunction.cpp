#include <iostream>
using namespace std;

class Sample {
    int x;

public:
    void set(int val) {
        x = val;
    }

    // const member function
    void show() const {
        cout << "Value of x = " << x << endl;

        // x = x + 1;  ❌ Not allowed inside const function
    }
};

int main() {
    Sample obj;
    obj.set(10);
    obj.show();

    return 0;
}
