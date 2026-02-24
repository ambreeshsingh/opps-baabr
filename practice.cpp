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