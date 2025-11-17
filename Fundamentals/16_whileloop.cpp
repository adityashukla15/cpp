#include <iostream>
using namespace std;
int main(){
    int teaCups;
    cout<<"Enter the number of cups: "<<endl;
    cin>>teaCups;
    while(teaCups>0){
        teaCups--;
        cout<<"Served tea !\n"<<endl;
        cout<<"Cups Remaining: "<<teaCups;
    }
    return 0;
}