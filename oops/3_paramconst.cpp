#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Tea{
    public:
    string teaName;
    int servings;
    vector<string>ingridients;
//paramter Constructor
    Tea(string name,int serve,vector<string>ingri){
     teaName = name;
        servings = serve;
        ingridients = ingri;
     cout<<" Param Constructor called"<<endl;
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
    Tea LemonTea("Lemon Tea",2,{"Water","Lemon","TeaLeaves"});
    LemonTea.displayDetails();
    return 0;
}