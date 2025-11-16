#include <iostream>
using namespace std;
int main(){
    int choice;
    int price;
    cout<<"Select your tea\n";
    cout << "1. Green Tea\n";
    cout << "2. Lemon Tea\n";
    cout << "3. Oolong Tea\n";
    cout << "Enter your choice in number: \n";
    cin>>choice;
    switch(choice){
        case 1:
         price=2;
         cout << "You selected Green Tea. Price: "<< price << endl;
         break;
         case 2:
         price=3;
         cout << "You selected Black Tea. Price: "<< price << endl;
         break;
         case 3:
         price=4;
         cout << "You selected OOlang Tea. Price: "<< price << endl;
         break;
    }
    return 0;

}