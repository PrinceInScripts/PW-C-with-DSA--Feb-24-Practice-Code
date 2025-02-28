/*
Ques  : Create a class ‘book’ with name, price and number of 
pages as its attributes. The class should contain following 
member functions : 
● countBooks(int price) : This function will return count of all 
the books that have a price less than the given price.
 ● isBookPresent(string title) : This will return a boolean value 
indicating whether any book with the given title exists or not.

*/

#include<iostream>
using namespace std;

class book{
    private:
    char name;
    int price:
    int noOfPage;

    public:
    int countBooks(int p){
        if(price<p) return 1;
        else return 0;
    }
    bool iBookPresent(int title){
        if(title==name) return true;;
        else return false;
    }
}