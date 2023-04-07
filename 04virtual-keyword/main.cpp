#include <iostream>
using namespace std;

class First {

public:
     virtual void f1(){
        cout<<"f1 function from first class"<<endl;
    }


};

class Second :public First {
    public:
        void f1(){
        cout<<"f1 function from Second class"<<endl;
     }
};


int main(){

    First *p;
    Second p1;
    p= & p1;
    // p->f1(); //early binding at compile time
    p->f1(); //after using virtual keyword,late binding at runtime
    return 0;
}
