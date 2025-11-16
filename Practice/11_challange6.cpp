#include <iostream>
using namespace std;
int main(){
    bool year;
    int cups;
    cout<<"Have you subscribed for 1 year press 1 for yes and 0 for no"<<endl;
    cin>>year;
    cout<<"Enter the number of cups: "<<endl;
    cin>>cups;
    if(year || cups>12){
        cout<<"You are eligible for discount"<<endl;
    }
    else{
        cout<<"You are not eligible for disocunt"<<endl;
    }
    return 0;
}