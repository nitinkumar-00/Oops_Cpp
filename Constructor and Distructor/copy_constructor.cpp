#include <bits/stdc++.h>
using namespace std;
class A{
    string name;
    public :
    A(string name){
        this->name=name;
    }
    A(A &a){  
        name=a.name;
    }
    void display(){
        cout<<name;
    }
};
int main() {
    A obj1("nitin");
    A obj2(obj1);
    obj1.display();
    obj2.display();

    return 0;
}