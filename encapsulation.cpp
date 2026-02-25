//  Why is encapsulation important in real-life applications like banking systems?

// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     double balance;   // Hidden data (Encapsulation)

// public:
//     // Constructor
//     BankAccount(double initialBalance) {
//         if(initialBalance >= 0)
//             balance = initialBalance;
//         else
//             balance = 0;
//     }

//     // Deposit function
//     void deposit(double amount) {
//         if(amount > 0) {
//             balance += amount;
//             cout << "Deposited: " << amount << endl;
//         } else {
//             cout << "Invalid deposit amount!" << endl;
//         }
//     }

//     // Withdraw function
//     void withdraw(double amount) {
//         if(amount > balance) {
//             cout << "Insufficient balance!" << endl;
//         } 
//         else if(amount <= 0) {
//             cout << "Invalid withdrawal amount!" << endl;
//         }
//         else {
//             balance -= amount;
//             cout << "Withdrawn: " << amount << endl;
//         }
//     }

//     // Getter function (Read-only access)
//     double getBalance() {
//         return balance;
//     }
// };

// int main() {
//     BankAccount account(1000);

//     account.deposit(500);
//     account.withdraw(300);
//     account.withdraw(2000);   // Invalid case

//     cout << "Current Balance: " << account.getBalance() << endl;

//     return 0;
// }





// ......................................................................................................................................

// 6. Create a class Student with:
// - private: name, age
// - public: setter and getter functions
// Print the details in main().
// #include <iostream>
// using namespace std;
// class Student{
//     private:
//     string name;
//     int age;

//     public:

//     void setname(string name){
//         this->name=name;

//     }

//     string getname(){
//         return name;

//     }

//     void setage(int age){
//         this->age=age;


        
//     }

//     int getage(){
//      return age;

//     }




// };
// int main(){
//     Student s1;
//     s1.setname("haressh");
//     cout<<s1.getname();

//     cout<<endl;

//     s1.setage(6);
//     cout<<s1.getage();


//     return 0;
// }


// ......................................................................................................................................

// 7. Create a class BankAccount with:
// - private: balance
// - public: deposit() and withdraw() functions
// Make sure balance cannot become negative.

// #include <iostream>
// using namespace std;
// class BankAccount{
//     private:
//     double balace;
//     public:
//     void deposite(double amount){
//         balace=amount;

//     }

//     void withdraw(double amount){
//         if(amount>balace){
//             cout<<" in sufficient ammount"<<endl;
//         }
//         else{
//             balace-=amount;
//         }

        
//     }
//     double getdeatail(){
//         return balace;
//     }




// };

// int main(){
//     BankAccount b;
//     b.deposite(5000);
//     b.withdraw(2498);
//     cout<<"amount left : "<<b.getdeatail();


//     return 0;

// }




// ......................................................................................................................................
// 8. Create a class Car with:
// - private: speed
// - public: setSpeed() (only allow speed ≤ 200)
// - public: getSpeed()

#include <iostream>
using namespace std;
class Car{
    private:
    double speed;
    public:
    Car(){

    }
    Car(double speed){
        this->speed=speed;

    }
    void setSpeed(double speed){
        if(speed<=200){
            this->speed=speed;
        }

    }

   double getSpeed(){
    return speed;

    }

};

int main(){

    Car s11;
    s11.setSpeed(189);

    Car s10(150);
    s10.setSpeed(201);

    cout<<s11.getSpeed()<<endl;
    cout<<s10.getSpeed()<<endl;

    return 0;

}
