
#include<iostream>
using namespace std;

class Player{
    private:
    int health;
    int age;
    int score;
    int alive;


    public:
    int getScore(){
       return score;
    }
    int getHealth(){
        return health;
    }
    int getAge(){
       return age;
    }
    int getAlive(){
        return alive;
    }
    int setScore(int score){
       this.score=score;
    }
    int setHealth(int health){
        this.health=health;
    }
    
    int setAge(int age){
       this.age=age;
    }
    int setAlive(bool alive){
        this.alive=alive
    }
    
};
 
int main(){
    Player harsh; //object creation staticlly
    Player raghav;

    harsh.setAge(21);
    harsh.setHealth(80);
    harsh.setScore(60);
    harsh.setAlive(true);

    raghav.setAge(22);
    raghav.setHealth(90);
    raghav.setScore(80);
    raghav.setAlive(true);
}