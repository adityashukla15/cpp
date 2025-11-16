#include <iostream>
using namespace std;
int main(){
    int cups;
    double price=20,discount,totalprice;
    cout<<"Enter the number of cups: \n"<<endl;
    cin>>cups;
    totalprice=cups*price;
    if(cups>20){
        discount=0.2;
    }
    else if(cups<=20 && cups>=10){
        discount=0.1;
    }
    else{
        cout<<"No discount"<<endl;
    }
    totalprice-=totalprice*discount;
    cout<<"Total price with discount is: "<<totalprice;
    return 0;
}