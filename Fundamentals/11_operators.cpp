//Logical Operators
#include <iostream>
using namespace std;
int main(){
    bool isStudent;
    int cups;
    cout<<"Are you a student press 1 for yes and 0 for no"<<endl;
    cin>>isStudent;
    cout<<"Enter the no of cups: "<<endl;
    cin>>cups;
    if(isStudent || cups>15){
        cout<<"You are eligible for the discount"<<endl;
    }
    else{
        cout<<"You are not eligible for the discount"<<endl;
    }
    return 0;
}