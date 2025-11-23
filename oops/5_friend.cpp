#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Tea{
    private:
    string teaName;
    int servings;

    public:
    Tea(string name, int serve):teaName(name),servings(serve){}

    friend bool compareServings(const Tea &tea1, const Tea &tea2);//this function will allow us the acess of both pvt and protected feilds

    void display() const{
        cout<<"teaname: "<<teaName<<endl;
    }
};

bool compareServings(const Tea &tea1,const Tea &tea2){
    return tea1.servings>tea2.servings;
}

int main(){
    Tea masalaTea("Masala Tea",14);
    Tea gingerTea("Ginger Tea",8);

    masalaTea.display();
    gingerTea.display();

    if(compareServings(masalaTea,gingerTea)){
        cout<<"Masala Tea has more servings !!"<<endl;
    }
    else{
        cout<<"Ginger tea has more servings "<<endl;
    }
}
