#include <iostream>
using namespace std;
int main(){
    int choice;
cout<<"Enter your brewing method: \n";
cout<<"1.for Boiling\n";
cout<<"2.for Steeping\n";
cout<<"3.for Iced Tea\n";
cin>>choice;
switch(choice){
    case 1:
    cout<<"Boil the tea in pan";
    break;
    case 2:
    cout<<"steep the tea";
    break;
    case 3:
    cout<<"Add ice to normal tea";
    break;
    default:
    cout<<"Invalid Method";
    break;

}
return 0;


}