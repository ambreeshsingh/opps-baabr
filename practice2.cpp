#include <iostream>
using namespace std;
class Myarray{
    public:
    int *data;
    int size;

Myarray(int size){
    this->size=size;
    cout<<"constructor is called"<<endl;
    data=new int[size];
    for(int i=0;i<size;i++){
        data[i]=0;
    }

}

Myarray(Myarray &arr ){
    size=arr.size;
    data=new int[size];
    for(int i=0;i<arr.size;i++){
        this->data[i]=arr.data[i];
    }
    
    

}

void printdata( ){
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";

    }
    cout<<endl;

}


~Myarray(){
    delete[] data;
    cout<<"destuctor is called"<<endl;

}

};

int main(){
    Myarray arr(10);
    Myarray arr2(arr);
    for(int i=0;i<10;i++){
       arr2.data[i]=1;
    }
   arr2.printdata();
   arr.printdata();
    
    return 0;
}