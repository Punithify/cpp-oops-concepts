#include <iostream>
using namespace std;

class Person{

//A class having atleast one pure virtual function is called abstract class

public:
    virtual void fun()=0; //pure virtual function
        void fun1(){}
};

class Student : public Person{
    public:
        void fun(){
            cout<<"Hello"<<endl;
        }
};



int main(){

    Student p1; //cannot create object of Person class
    p1.fun();
    return 0;
}