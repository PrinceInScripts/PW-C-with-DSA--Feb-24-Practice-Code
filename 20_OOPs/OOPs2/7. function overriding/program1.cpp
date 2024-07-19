#include<iostream> 
using namespace std;
class Vehicle{
   public:
    void show(){
        cout<<"Vehicle Show"<<endl;
    }
};

class Bike:public Vehicle{
    public:
    void show(){
        cout<<"Bike Show"<<endl;
    }
};
int main(){

    //compiler POV : Vehicle type ka hai
    //runtime pov : Bike ka address hai
     Bike b;
     Vehicle *a;
     a=&b;
     a->show();
}