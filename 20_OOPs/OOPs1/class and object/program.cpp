
#include<iostream>
using namespace std;

class Player{
    public:
    int score;
    int health;
};

int main(){
    Player hariram;
    hariram.score=80;
    hariram.health=60;

    cout<<hariram.score<<endl;
    cout<<hariram.health<<endl;
}