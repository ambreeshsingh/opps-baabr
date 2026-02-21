#include<iostream>
using namespace std;
class Animal{
    public:
    int name;
    int age;

    Animal(){
        cout<<"constructer is called"<<endl;
    }

};


int main(){
    //static object creation
    Animal a;

    // dyanamic
    Animal * b=new Animal;

    return 0;
}