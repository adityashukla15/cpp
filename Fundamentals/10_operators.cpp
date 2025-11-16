//Relational Operators
#include <iostream>
using namespace std;
int main(){
    int cups;
    cout<<"Enter the number of cups u bought: "<<endl;
    cin>>cups;
    if(cups>20){
        cout<<"You recived a gold badge"<<endl;
    }
    else if(cups<=20 && cups>=10){
        cout<<"You recievd a silver badge"<<endl;
    }
    else{
        cout<<"You have no badges"<<endl;
    }
    return 0;
}