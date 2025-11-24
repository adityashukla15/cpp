#include <iostream>
#include <string>
using namespace std;

class Tea{
    public:
    virtual void prepareIngridients();
    virtual void brew()=0;
    virtual void serve()=0;

    void makeTea(){
        prepareIngridients();
        brew();
        serve();
    }

};

class GreenTea : public Tea{
public:
    void prepareIngridients() override {
        cout << "green leaves and water is ready" << endl;
    }

    void brew() override {
        cout << "Green Tea brewed" << endl;
    }
    void serve() override {
        cout << "Green Tea Served" << endl;
    }
};

class MasalaTea : public Tea{
public:
    void prepareIngridients() override {
        cout << "green leaves and water is ready along with masala" << endl;
    }

    void brew() override {
        cout << "Masala Tea brewed" << endl;
    }
    void serve() override {
        cout << "Masala Tea Served" << endl;
    }
};

int main(){

    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();

    return 0;
}