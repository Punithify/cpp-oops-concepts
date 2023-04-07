#include <iostream>
#include <string>
using namespace std;

class User{
    string _secret="dheera";

    public:
        string getData(){
            return _secret;
        }

        void setData(const string &newSecret){
            cout<<"Set data"<<endl;
            _secret=newSecret;
        }

};


int main(){


    User dheera;
    dheera.getData();
    // dheera.secret; //cannot access private member
    dheera.setData("dheera-new");
    cout<<dheera.getData()<<endl; 
    return 0;
}