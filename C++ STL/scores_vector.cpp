#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> scores;

    //push_back()
    scores.push_back(85);
    scores.push_back(90);
    scores.push_back(95);
    scores.push_back(100);
    scores.push_back(105);

    //pop_back()
    scores.pop_back(); //remove 105

    // Access using [] and at()
     cout << "The First Element using []: " << scores[0] << endl;
     cout << "The First Element using at(): " << scores.at(1) << endl;

    //sort()
    sort(scores.begin(), scores.end());

    //Iterator - based Loop
    for(auto itr = scores.begin(); itr != scores.end(); itr++){
        cout << *itr << " ";
    }cout << endl;

    return 0;
}