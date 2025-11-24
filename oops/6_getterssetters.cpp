#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tea{
    private:
    string teaName;
    int servings;
    vector<string> ingredients;

    public:
    Tea(){
        teaName="Unknown Tea";
        servings=1;
        ingredients={"Water", "tea leaves"};
    }
    Tea(string name, int serve,vector<string>ingri){
        teaName=name;
        servings=serve;
        ingredients=ingri;
    }
    string getTeaName(){
        return teaName;
    }

    void setTeaName(string name){
        teaName=name;
    }
    int getServings(){
        return servings;
    }
    void setServings(int serve){
        servings=serve;
    }
    
    vector<string> getIngredients(){
        return ingredients;
    }

    void setIngredients(vector<string>ingri){
        ingredients=ingri;
    }
    void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: " ;
        for(const string &ingredient : ingredients){
            cout << ingredient << " ";
        }
        cout << endl;
    }
};
int main(){
    Tea tea;
    tea.setTeaName("Masala Tea");
    tea.displayChaiDetails();
    return 0;
}