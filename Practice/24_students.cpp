#include <iostream>
#include <string>
using namespace std;

class Student{
public:
string name;
int roll;
int marks;
void setDetails(){
    cout<<"Enter the name of the student: "<<endl;
    cin>>name;
    cout<<"Enter the roll number of the student: "<<endl;
    cin>>roll;
    cout<<"Enter the marks of the student: "<<endl;
    cin>>marks;
}
void display(){
    cout<<"The name of the student is:"<<name<<endl;
    cout<<"His roll no is "<<roll<<endl;
    cout<<"Marks scored by him is :"<<marks<<endl;
}
};
int main(){
    Student aditya;
    aditya.setDetails();
    aditya.display();
    return 0;
}