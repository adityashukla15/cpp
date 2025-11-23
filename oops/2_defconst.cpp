#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Tea{
    public:
    string teaName;
    int servings;
    vector<string>ingridients;
//Default constructor it will run without defining also
    Tea(){
     teaName="Unkown Tea";
     servings=1;
     ingridients={"Water","Tea Leaves"};
     cout<<"Constructor called"<<endl;
    }
    void displayDetails(){
        cout<<"Tea Name: "<<teaName<<endl;
        cout<<"Servings: "<<servings<<endl;
        cout<<"Ingridents: ";
        for(string ingridient:ingridients ){
            cout<<ingridient<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Tea defaultTea;
    defaultTea.displayDetails();
    return 0;
}