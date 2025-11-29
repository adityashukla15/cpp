#include <iostream>
#include <string>
using namespace std;

class Bank{
    public:
    string accountNumber;
    float balance=0;

 void info(){
    cout<<"Enter account number: "<<endl;
    cin>>accountNumber;
 }
    void depoist(float amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"Add valid amount"<<endl;
        }
    }
    void withdraw(float amount){
        if(balance<0){
            cout<<"Insufficent Balance"<<endl;
        }
        else{
            balance-=amount;
        }
    }
    void showBalance(){
        cout<<"Current Balance: "<<balance;
    }

};
int main(){
    Bank b;
    b.info();
    b.depoist(1000);
    b.showBalance();
    b.withdraw(500);
    b.showBalance();
    return 0;
}

