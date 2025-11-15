//Favorite Tea Input Write a program that takes the user’s favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message.

#include <iostream>
#include <string>
using namespace std;
int main(){
    string tea;
    int teaQuantity;
    cout<<"Enter Ur fav tea: \n"<<endl;
    getline(cin,tea);
    cout<<"How many cups do you want: ?\n"<<endl;
    cin>>teaQuantity;
    cout<<"Ur fav tea \t"<<tea<<"with "<<teaQuantity<<"cups"<<"is presented on ur head take it from there"<<endl;
    return 0;

}