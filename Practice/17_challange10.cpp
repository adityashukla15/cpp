#include <iostream>
#include <string>
using namespace std;
int main(){
    string response;
    do{
        cout<<"Do u want to add more sugar: "<<endl;
        getline(cin,response);
    }while(response!="enough");
    return 0;
}