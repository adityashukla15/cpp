#include <iostream>
using namespace std;
 
class Calculator{
    public:
    int number1;
    int number2;

    void input(){
        cout<<"Enter number 1: "<<endl;
        cin>>number1;
        cout<<"Enter number 2: "<<endl;
        cin>>number2;
    }

    int add(){
        cout<<"Additon of the numbers is: "<<number1+number2;
    }
    int sub(){
        cout<<"Subtraction of the numbers is: "<<number1-number2;
    }
    int mul(){
        cout<<"Multiplication of the numbers is: "<<number1*number2;
    }
    int div(){
        cout<<"Divison of the numbers is: "<<number1/number2;
    }    
    
};
int main(){
    Calculator c;
    c.input();
    c.add();
    c.sub();
    c.div();
    c.mul();
    return 0;

}