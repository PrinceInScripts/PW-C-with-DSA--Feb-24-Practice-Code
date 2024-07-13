
#include<iostream>
using namespace std;

class A {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    // Constructor
    A() {
       cout<<"A ka Constructor";
    }

   
};

class B : public A {
    public:
    B() {
       cout<<"B ka Constructor";
    }
};

class C : public B {
    public:
C() {
       cout<<"C ka Constructor";
    }
};


int main() {
   C c;
}
