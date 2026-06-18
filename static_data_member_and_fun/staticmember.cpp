#include <bits/stdc++.h>
using namespace std;
class Solution{
    int age;
    string name;

    public:
    static int countstudents;

    Solution(string name,int age){
        this->name=name;
        this->age=age;
        countstudents++;
    }
    void display(){
        cout<<"Student name "<<name<<" and age is "<<age<<endl;
    }
};
int Solution::countstudents=0;
int main() {
    
    Solution st("nitin",20);
    st.display();
    cout<<Solution::countstudents<<endl;
  
    return 0;
}