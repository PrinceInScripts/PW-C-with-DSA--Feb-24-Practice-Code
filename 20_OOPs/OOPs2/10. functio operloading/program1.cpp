

#include<iostream>
using namespace std;
class ComplexNumber{
  public:
    int real;
    int imaginary;

    ComplexNumber add(ComplexNumber &c1){
        ComplexNumber c3;
        c3.real=c1.real+this->real;
        c3.imaginary=c1.imaginary+this->imaginary;

        return c3;
    }
};
int main(){
     ComplexNumber a1,a2;
     a1.real=5;
     a1.imaginary=10;

     a2.real=10;
     a2.imaginary=5;

     ComplexNumber a3;
    a3=a1.add(a2);

     cout<<"real-->"<<a3.real<<endl;
     cout<<"imaginary-->"<<a3.imaginary<<endl;
}