#include <iostream>
#include <string>
using namespace std;
int main(){
    const char* teaTypes[5] = {"Oolong tea", "Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"};
    for(int i=0;i<5;i++){
        cout<<"Brewing"<<teaTypes[i]<<"..."<<endl;
        for(int j=0;j<3;j++){
            cout<<"Brewing "<<j<<"cup of tea"<<teaTypes[i]<<endl;
        }
    }
    return 0;
}