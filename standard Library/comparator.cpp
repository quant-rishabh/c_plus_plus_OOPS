#include <iostream>
using namespace std;

class Player{

    

    public:

    int run;
    int wicket;

    Player(int a, int b) : run(a), wicket(b){

    }

    bool operator >(const Player & rhs){
        // here left side operand calling a operator method and rhs operand as argument in the functin

        if(this->run > rhs.run){
            return true;
        }
        return false;
    }


};

int main() {

    Player p(10,5);
    Player p2 (20, 66);
    cout << (p2 > p);
    cout << (p > p2);    
  return 0;
}