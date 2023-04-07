#include <iostream>
#include <string>
using namespace std;

// constructor:
//     1.  A constructor is called during object creation.
//     2.  It is mainly used to data member initalization
//     3.  There are different types of constructor namely
//         default constructor,parameterized constructor,copy constructor


// Destructor:
//     1.  Destructor release memory space occupied by the objects created by constructor
//     2.  The destructor is only one way to destroy the object created by constructor. Hence destructor can-not be overloaded.




class Phone{
   string _name="";
    string _os="";
    int price=0;

    public:
        Phone(); //default constructor
        Phone (const string &name,const string &os,const int &price ); //parameterized constructor
        Phone(const Phone &values); //copy constructor

        string getName(){
            return _os;
        }

        ~Phone(); //destrcutor

};

Phone ::Phone():_name(),_os("Oxygen-os"),price(){
    puts("Default constrcutor");
}


Phone :: Phone(const string &name,const string &os,const int &price ):_name(name),_os(os),price(price){
        puts("Paramter constructor");
}

Phone::Phone(const Phone &values){
    puts("Copy constrcutor");
    _name=values._name;
    _os="hello"+values._os;
    price=values.price;
}

Phone::~Phone(){
    cout<<"destrcutor called"<<_name<<endl;
}


int main(){

    Phone onePlus;
    onePlus.getName();   
    Phone nothingPhone("NothingPhone1","skinned-android",12000);
    cout<<nothingPhone.getName()<<endl;;


    Phone OnePlus8=onePlus;
   cout<<OnePlus8.getName()<<endl;

    return 0;
}