#include <iostream>
using namespace std;
int checktemprature(int temprature){//function decaleration
    return temprature*2;
}
void greet(){
    cout<<"Have a good Day"<<endl;
}
int main(){
    int temprature,doubtemp;
    cout<<"Enter temprature: "<<endl;
    cin>>temprature;
    doubtemp=checktemprature(temprature);//function call
    cout<<"Your double temprature is: "<<doubtemp<<endl;
    greet();
    return 0;

}
