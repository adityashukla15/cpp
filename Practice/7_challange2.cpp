//Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.

#include <iostream>
#include <string>
using namespace  std;
int main(){
 string tea;
 float price;
 int ratedprice;
 char rating;
 cout<<"Enter the type of tea\n"<<endl;
 getline(cin,tea);
 cout<<"Enter the base price\n"<<endl;
 cin>>price;
 ratedprice=(int)(price+(price*10/100));
 cout << "Enter your rating (A/B/C):\n";
 cin>>rating;

  cout << "\n--- Tea Information ---\n";
    cout << "Tea Type:\t" << tea << "\n";
    cout << "Price per kg:\t" << ratedprice << "\n";
    cout << "Rating:\t\t" << rating << "\n";
    return 0;
}