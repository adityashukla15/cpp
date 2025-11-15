#include <iostream>
using namespace std;
int main(){
    int leaves=50;//no decimal point  if there is decimal point it will round off
    int tea=2.98;//this will rounoff to 2
    float temprature=25.78;//stores temprature in decimal places
    double amount=2000000;//its precedence is low than this so it gave another value
    char teagrade='A';
    bool isTeaReady='A';//it gives 1 output means true 
    // bool check=""; it will give error we cannot give empty spaces in  boolean 
    bool check=true;//it will give output 1 which means true
    cout<<leaves<<endl;
    cout<< temprature<<endl;
    cout<<amount<<endl;
    cout<<teagrade<<endl;
    cout<<isTeaReady<<endl;
    cout<<tea<<endl;
    cout<<check<<endl;
    return 0;
}