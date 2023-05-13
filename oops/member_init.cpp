#include <iostream>
using namespace std;


class Player{
    private:
        const int team ;
        int runs;
    public:

        Player(int runs): runs(runs), team(1){// here runs is member initlization

        }   

        int getRuns(){
            return runs;
        }

};

int main() {
  // your code goes here

  Player surya(1000);
  cout << surya.getRuns() << endl;
  
  return 0;
}