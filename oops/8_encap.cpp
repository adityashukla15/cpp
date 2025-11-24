#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    private:
    string accountNumber;
    double balance;

    public:
    BankAccount(string accNum,double intialBalance){
        accountNumber=accNum;
        balance=intialBalance;
    }
    double getBalance()const{
        return balance;
    }

    void depoist(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Deposited: "<<amount<<endl;
        }
        else{
            cout<<"Invalid deposit amount";
        }
    }

    void withdraw(double amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
        }else{
            cout<<"Invalid withdrawn amount"<<endl;
        }
    }

};

int main(){
    BankAccount myAccount("24101ABCDE",500);
    myAccount.getBalance();
    myAccount.depoist(200);
    myAccount.withdraw(100);
    myAccount.getBalance();
    return 0;
}
