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

// #include<iostream>
// using namespace std;
// class  Student{
//     public:
//     int roll_no;
//     string name;
//     double* cgptr;

//     Student(int roll_no,string name,double cgpa){
//         this->name=name;
//         this->roll_no=roll_no;
//         this->cgptr=new double;
//         *cgptr=cgpa;
//     }
//     Student(Student &s1){
//         this->name=s1.name;
//         this->roll_no=s1.roll_no;
//         this->cgptr=new double;
//         *cgptr=*(s1.cgptr);

//     }

// };

// int main(){
//     Student s1(2,"hareesh",9.6);
//     // Student s2(s1);
//     // *(s2.cgptr)=8.9;
//     // cout<< *(s1.cgptr);

//     //deep copy ka concept lagega;
//     Student s2(s1);
//     *(s1.cgptr)=8.9;
//     cout<<(*s1.cgptr)<<endl;
//     cout<<(*s2.cgptr);
   
 
// }
///////////

// Has dynamic array
// Implements deep copy constructor
// Has destructor provide a code

 #include <iostream>
using namespace std;

class MyArray {
private:
    int size;
    int* data;

public:

    // 🔹 Parameterized Constructor
    MyArray(int s) {
        size = s;
        data = new int[size];   // dynamic memory allocation

        for(int i = 0; i < size; i++) {
            data[i] = 0;        // initialize
        }

        cout << "Constructor called\n";
    }


    // 🔹 Deep Copy Constructor
    MyArray(const MyArray &obj) {
        size = obj.size;

        // Allocate new memory (IMPORTANT for deep copy)
        data = new int[size];

        // Copy actual values
        for(int i = 0; i < size; i++) {
            data[i] = obj.data[i];
        }

        cout << "Deep Copy Constructor called\n";
    }


    // 🔹 Function to set value
    void setValue(int index, int value) {
        if(index >= 0 && index < size) {
            data[index] = value;
        }
    }

    // 🔹 Function to display array
    void display() {
        for(int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // 🔹 Destructor
    ~MyArray() {
        delete[] data;   // free dynamic memory
        cout << "Destructor called\n";
    }
};

int main() {

    MyArray arr1(3);
    arr1.setValue(0, 10);
    arr1.setValue(1, 20);
    arr1.setValue(2, 30);

    cout << "arr1: ";
    arr1.display();

    // Copy constructor called
    MyArray arr2 = arr1;

    cout << "arr2: ";
    arr2.display();

    return 0;
}