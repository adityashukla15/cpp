#include <iostream>
using namespace std;
int main(){
    float temprature;
    cout<<"Enter temprature in celcius: ";
    cin>>temprature;
    if(temprature>100){
        cout<< "Too hot!";
    }
    else if(temprature<=100 && temprature>=80){
        cout<<"Perfect temperature";
    }
    else if(temprature<80){
        cout<<"Too cold!";
    }
    else{
        cout<<"Temprature not suitable for tea";
    }
    return 0;
}