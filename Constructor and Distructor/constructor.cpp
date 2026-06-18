#include <bits/stdc++.h>
using namespace std;
class A {
    string name;
    int age;
public:
    A() {
        cout << "Constructor called" << endl;
    }
    A(string name,int age){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<"Name "<<name<<endl;
        cout<<"Age "<<age;
    } 
};
int main() {
    A obj1;
    A obj2("nitin",20);
    obj2.display();
    return 0;
}