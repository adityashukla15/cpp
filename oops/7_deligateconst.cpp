#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tea {
    public:
    string teaName;
    int servings;
    vector<string> ingridients;

    // Delegating constructor
    Tea(string name) : Tea(name, 1, {"Water", "tea leaves"}) {}

    Tea(string name, int serve, vector<string> ingr) {
        teaName = name;
        servings = serve;
        ingridients = ingr;

        cout << "Main Constructor called !" << endl;
    }

    void displayChaiDetails() {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (string ingridient : ingridients) {
            cout << ingridient << " ";
        }
        cout << endl;
    }
};

int main() {
    Tea quickTea("Quick Tea");
    quickTea.displayChaiDetails();
    return 0;
}
