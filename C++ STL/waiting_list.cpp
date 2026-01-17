#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> waitlist;

    //Push()
    waitlist.push("Alice");
    waitlist.push("Bob");
    waitlist.push("Charlie");

    //front() and back()
    cout << "Next person: " << waitlist.front() << endl;
    cout << "Last person: " << waitlist.back() << endl;

    //Pop()
    waitlist.pop(); // Alice processed

    cout << "Now, Next Person: " << waitlist.front() << endl;

    return 0;
}