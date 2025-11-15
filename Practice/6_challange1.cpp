#include <iostream>
#include <string>
using namespace std;

int main(){
    string tea;           // type of tea
    float price;          // price per kilogram
    char rating;          // rating (char)

    cout << "Enter the type of tea:\n";
    getline(cin, tea);

    cout << "Enter the price per kilogram:\n";
    cin >> price;

    cout << "Enter your rating (A/B/C):\n";
    cin >> rating;

    // Output with escape sequences
    cout << "\n--- Tea Information ---\n";
    cout << "Tea Type:\t" << tea << "\n";
    cout << "Price per kg:\t" << price << "\n";
    cout << "Rating:\t\t" << rating << "\n";

    return 0;
}
