#include <iostream>
using namespace std;
int main(){
    int teapacks;
    cout<<"Enter the number of teapacks: "<<endl;
    cin>>teapacks;
    if(teapacks<20){
        teapacks+=10;
    }
    cout<<"Total no of teapacks: "<<teapacks<<endl;
    return 0;
}