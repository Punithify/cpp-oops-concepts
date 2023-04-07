#include <iostream>
using namespace std;

class Man{
    string _name;
    int _age;
    Man(){};

    protected:
        Man(const string &name,const int &age):_name(name),_age(age){};
        void run(){
            puts("I can ru Aswell!");
        }
    public:
        void sayName() ;

};

void Man ::sayName() {
    cout<<_name<<endl;
}

int main(){



    return 0;
}