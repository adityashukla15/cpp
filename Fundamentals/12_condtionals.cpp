#include <iostream>
#include <string>
using namespace std;
int main(){
    string tea;
    cout<<"Enter the tea u want: \n"<<endl;
    getline(cin,tea);
    if(tea=="Green Tea"){
        cout<<"Your order for green tea is confirmed"<<endl;
    }
    return 0;
}