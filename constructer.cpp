// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     string name;
//     int age;

//     Animal(string name,int age){
//         // cout<<"constructer is called"<<endl;
//         this->name=name;
//         this->age=age;
//     }
//     Animal(Animal &obj){
//        this->name=name;
//     }

// };


// int main(){
//     //static object creation
//    // Animal a;

//     // dyanamic
//     Animal * b=new Animal("bobby",16);
//     Animal *c(b);

//     return 0;



// }



///.......................................................................................................................................



// copy constructor
// when static object is created


// #include<iostream>
// using namespace std;
// class Teacher{
//     public:
//     string name;
//     string subject;
//     long id;

//     Teacher(string name,string subject ,int id){
//         this->name=name;
//         this->subject=subject;
//         this->id=id;
//     }
//     Teacher( Teacher &t1){
//         cout<<"copy contructor is called"<<endl;
//         this->name=t1.name;
//         this->id=t1.id;

//     }

// };


// int main(){
//     Teacher t1("sheela","cs",45);
//      Teacher t2(t1);

//      cout<<t1.name<<endl;
//      cout<<t2.name<<endl;
//      cout<<t1.id<<endl;
//      cout<<t2.id<<endl;
//      cout<<t1.subject<<endl;
//      cout<<t2.subject<<endl;
   
// }







///.......................................................................................................................................

//shallow copy

#include<iostream>
using namespace std;
class  Student{
    public:
    int roll_no;
    string name;
    double* cgptr;

    Student(int roll_no,string name,double cgpa){
        this->name=name;
        this->roll_no=roll_no;
        this->cgptr=new double;
        *cgptr=cgpa;
    }
    Student(Student &s1){
        this->name=s1.name;
        this->roll_no=s1.roll_no;
        this->cgptr=new double;
        *cgptr=*(s1.cgptr);

    }

};

int main(){
    Student s1(2,"hareesh",9.6);
    // Student s2(s1);
    // *(s2.cgptr)=8.9;
    // cout<< *(s1.cgptr);

    //deep copy ka concept lagega;
    Student s2(s1);
    *(s1.cgptr)=8.9;
    cout<<(*s1.cgptr)<<endl;
    cout<<(*s2.cgptr);
   
 
}