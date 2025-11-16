//Airthmatic Operators
#include <iostream>
using namespace std;
int main(){
    int cups;
    double price,totalprice;
    cout<<"Enter the no of cups: "<<endl;
    cin>>cups;
    cout<<"Enter the price: "<<endl;
    cin>>price;
    totalprice=cups*price;
    if(cups>50){
        totalprice=totalprice-(totalprice*0.05);
    }
    cout<<"Total price for the cups is: "<<totalprice<<endl;
    return 0;
}