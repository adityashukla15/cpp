#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai{
    public:
    string teaName;
    int servings;
    vector<string>ingredients;

    void displayChaiDetails(){
        cout<<"Teaname: "<<teaName<<endl;
        cout<<"Servings: "<<servings<<endl;
        cout<<"Ingridients: ";
         for(string ingridient : ingredients){
            cout << ingridient << " ";
        }
         cout << endl;
    }

};
int main(){
    Chai chaiOne;

    chaiOne.teaName = "lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water", "lemon", "Honey", "tea"};

    chaiOne.displayChaiDetails();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala Chai";
    chaiTwo.servings = 4;
    chaiTwo.ingredients = {"Water", "Milk", "Tea", "Ginger", "Masala"};

    chaiTwo.displayChaiDetails();

    return 0;
}