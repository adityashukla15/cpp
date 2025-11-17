#include <iostream>
#include <string>
using namespace std;
int main(){
    const char* tea[6]={"Lemon Tea","OOlang Tea","Red Tea","Black Tea","Herbal Tea","No tea"};
    for(int i=0;i<6;i++){
        if(tea[i]=="Herbal Tea"){
            cout<<"Skipping "<<tea[i]<<endl;
            continue;

        }
        if(tea[i]=="No Tea"){
             cout<<"Loop terminated..."<<endl;
             break;
        }
        cout<<"Tea list: "<<tea[i]<<endl;
    }
    return 0;
}