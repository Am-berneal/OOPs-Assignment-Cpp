#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> history;

    //push
    history.push("google.com");
    history.push("github.com");
    history.push("stackoverflow.com");

    //top()
    cout << "Current Page: " << history.top() << endl;

    //pop() undo
    history.pop();
    cout << "After undo, Current Page: " << history.top() << endl;

    //empty()
    while(!history.empty()){
        history.pop();
    }

    cout << "Is history empty? " << (history.empty() ? "Yes" : "No") << endl;

    return 0;
}