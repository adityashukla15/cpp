#include <iostream>
using namespace std;

class Rectangle{
    public:
    double length;
    double breadth;
    
    void input(){
        cout<<"Enter the length of rectangle: "<<endl;
        cin>>length;
        cout<<"Enter the breadth of rectangle: "<<endl;
        cin>>breadth;
    }

    double area(){
       cout<<"Area of the rectangle is: "<<length*breadth<<endl;
    }
    double perimeter(){
        cout<<"Perimeter of the rectangle is: "<<2*(length+breadth)<<endl;
    }
};

int main(){
    Rectangle a1;
    a1.input();
    a1.area();
    a1.perimeter();
    return 0;
}