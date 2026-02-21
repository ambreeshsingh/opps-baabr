#include<iostream>
using namespace std;
// class Animal{
//     int x;
//     int y;
//     char e;

// };
// int main(){
//     cout<<"size of"<<sizeof(Animal);

// }


// class
class Animal{

    private:
    int weight;

    public:
    //state or property
    int age;
    string name;

    //methods//behaviour
    void eat(){
        cout<<"eatting"<<endl;

    }
    void sleep(){
        cout<<"sleeping"<<endl;

    }
    int getweight(){
        return weight;
    }
    void setweight(int w){
        weight=w;
    }
    
 
};
int main(){
    //object craetion


    //static object creation
    // Animal duggu;
    // duggu.name="puppy";
    // duggu.age=12;
    // cout<<"Name ="<<duggu.name<<endl;
    // cout<<"Age ="<<duggu.age<<endl;


    // duggu.setweight(100);
    // cout<<"weight ="<<duggu.getweight()<<endl;


    // dyanamic
 Animal* suresh =new Animal;
 suresh->age=101;
 suresh->name="efpoke";

cout<<(suresh->age);
   

}

