#include <iostream>
using namespace std;

int totaltea(int tea[],int size){
  int total=0;
  for(int i=0;i<size;i++){
    total+=tea[i];
  }
  return total;
}

int main(){
    int teaServed[6]={23,45,67,56,78,90};
    int total=totaltea(teaServed,6);
    return 0;
}