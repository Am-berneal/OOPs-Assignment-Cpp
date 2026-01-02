#include<iostream>
#include<cstring>
using namespace std;

class STRING{
    char str[50];
    public:
    STRING(const char* s =""){
        strcpy(str,s);
    }

    int operator==(STRING s){
        return strcmp(str,s.str) == 0;
    }

    STRING operator+(STRING s){
        STRING temp;
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    STRING s1("Hello"), s2("World"), s3;
    s3 = s1 + s2;
    s3.display();

    if(s1 == s2){
        cout << "Both String are Equal\n";
    }
    else{
        cout << "Both Strings are Unequal\n";
    }
}