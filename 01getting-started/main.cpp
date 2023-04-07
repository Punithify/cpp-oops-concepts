#include <iostream>
#include <string>
using namespace std;

class User{

    int _secret=11; //private members by default
    public:
        string name="sultana";
        void userMessage();
        void setSecret( int const &newSecret){ //setter - to set a value to a private member
            _secret=newSecret;
        }
        int getSecret(){ //getter - to get value of a private member
            return _secret;
        }
        void getSecret()const;

};

void User:: userMessage(){ 
    cout<<"Hello User "<<name<<endl;
}

void User::getSecret()const{

};

//important
// const objects can only access const objects
//non-const objects can access const members as well as non-const members


int main(){

    cout<<"hello world"<<endl;

    User dheera;
    // dheera.userMessage(); //takes the default name
    dheera.name="dheera";
    dheera.userMessage();// name is dheera 
    dheera.setSecret(11);
    cout<<dheera.getSecret()<<endl;

    //constant objects

    const User veera;


    return 0;
}