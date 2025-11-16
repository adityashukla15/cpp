#include <iostream>
using namespace std;
int main(){
    int time;
    cout<<"Enter your time hours(0-23)\n"<<endl;
    cin>>time;
    if(time<=18 && time>=8){
        cout<<"Shop is open";
    }
    else{
        cout<<"Shop is closed";
    }
    return 0;
}