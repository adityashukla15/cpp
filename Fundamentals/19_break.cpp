#include <iostream>
#include <string>
using namespace std;
int main(){
    string response;
    while(true){
        cout<<"Do you want more cups of tea (type stop) for exit";
        getline(cin,response);
        if(response=="stop"){
            break;
        }
        cout<<"Here's another cup of tea";
    }
    cout<<"No more tea served";
return 0;
}