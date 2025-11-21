#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int marks;

   void input(){
    cout<<"Enter student name: "<<endl;
    cin>>name;
    cout<<"Enter student's age: "<<endl;
    cin>>age;
    cout<<"Enter student's marks: "<<endl;
    cin>>marks;

   }

   void display(){
    cout<<"Student name:"<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Marks scored: "<<marks<<endl;
   }

};

int main(){
    Student aditya;
    aditya.input();
    aditya.display();
    return 0;
}