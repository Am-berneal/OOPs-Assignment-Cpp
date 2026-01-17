#include<iostream>
#include<array>
#include<numeric>
using namespace std;

int main(){
    array<double, 5>temperatures;

    temperatures.fill(0.0);

    cout << "Number of temperatures: " << temperatures.size() << endl;

    temperatures[0] = 25.5;
    temperatures[1] = 26.0;
    temperatures[2] = 24.8;

    double sum = accumulate(temperatures.begin(), temperatures.end(), 0.0);

    cout << "Total Temperature sum is: " << sum << endl;
    
    return 0;
}