#include <iostream>
using namespace std;
int main(){
    int teaBags;
    cout<<"How many teabags have u left?: "<<endl;
    cin>>teaBags;
    while(teaBags>0){
        teaBags--;
        cout<<"Tea Bags remaining: "<<teaBags;
    }
    cout<<"Out of tea Bags";
    return 0;
}