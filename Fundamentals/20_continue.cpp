#include <iostream>
#include <string>
using namespace std;
int main(){
    const char* teaTypes[5] = {"Oolong tea", "Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"};
    for(int i=0;i<5;i++){
        if(teaTypes[i]=="Green Tea"){
            cout<<"Skipping the tea "<<teaTypes[i]<<endl;
            continue;
        }
        cout<<"Brewing the tea "<<teaTypes[i]<<endl;

    }
    return 0;

}