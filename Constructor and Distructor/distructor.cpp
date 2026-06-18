#include <bits/stdc++.h>
using namespace std;
 class A{
    string name;
    public :
    A(){
        cout<<"constructor is run"<<endl;
        name="nitin";
    }
    ~A(){
        cout<<"Distructor is run";
        
    }
 };
int main() {
    A obj;

    return 0;
}