#include <bits/stdc++.h>
using namespace std;
class Staticfunction{
    static int count;
    public:
    void increase(){
        count++;
        cout<<count;
    }
    void decrease(){
        count--;
        cout<<count;
    }
    static void display(){
        cout<<count;
    
    }
};
int Staticfunction::count=6;
 
int main() {
    Staticfunction st;
    st.increase();
    st.decrease();
    st.display();
    return 0;
}