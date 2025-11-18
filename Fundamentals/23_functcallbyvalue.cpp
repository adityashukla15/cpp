#include <iostream>
using namespace std;

int incTea(int tea){
 cout<<"Increased Tea: "<<tea+5<<endl;
}

int main(){
    int tea;
    cout<<"Enter the no of cups: "<<endl;
    cin>>tea;
    incTea(tea);
    cout<<"Total tea cups: "<<tea<<endl;//this will gve total cups still 5 this is called call by value
    return 0;
}
//call by value means change in the copy not in the original code