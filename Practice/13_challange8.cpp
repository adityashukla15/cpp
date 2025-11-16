#include <iostream>
using namespace  std;
int main(){
    int age;
    cout<<"Enter ur age: \n";
    cin>>age;
   if(age>=18){
    cout<<"You are eligible for purchasing the tea";
   }
   else{
    cout<<"You are too young for purchasing";
   }
   return 0;
}