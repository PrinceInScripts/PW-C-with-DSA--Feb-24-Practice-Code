
#include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engineSize;
    //paramatorized constructor
    Bike(int tyreSize,int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
        cout<<"Constructor is Call...."<<endl;
    }
};
int main(){
    Bike tvs(12,100);
    Bike honda(13,150);
    Bike platina(15,300);
    cout<<tvs.tyreSize<<" " <<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" " <<honda.engineSize<<endl;
    cout<<platina.tyreSize<<" " <<platina.engineSize<<endl;

}