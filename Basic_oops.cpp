//simple class and obj creation , getter and setter 

#include <iostream>
#include <string>
using namespace std;
class Student{
    public :
    int id;
    string name;
    int age;
    void getstudentdata(){
        cout<<"Student name"<< name << "ID" << id << "age" <<age;
    }
    void setstudentdata(int i,string n,int a){
        id=i;
        name=n;
        age=a;
    }
};
int main(){
    Student st;
    st.setstudentdata(85,"nitin",20);
    st.getstudentdata();
}