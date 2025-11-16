//Assingment Operators
#include <iostream>
using namespace std;
int main(){
    int teabags;
    cout<<"Enter the number of teabags: "<<endl;
    cin>>teabags;
    if(teabags<10){
        teabags+=5;
    }
    cout<<"Total tea bags u have: "<<teabags<<endl;
    return 0;
}