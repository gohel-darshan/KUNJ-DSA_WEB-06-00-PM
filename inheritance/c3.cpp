#include <iostream>
using namespace std;

class Superhero {
public:
    void displayPowers() {
        cout << "Superhero Powers: Super strength, flight." << endl;
    }
};

class FightingHero : public Superhero {
public:
    void displayFightingSkills() {
        cout << "Fighting Hero Skills: Martial arts, hand-to-hand combat." << endl;
    }
};

class Batman : public FightingHero {
public:
    void displayIdentity() {
        cout << "I am Batman!" << endl;
    }
};

int main() {
    Batman batman;
    batman.displayIdentity();
    batman.displayPowers();
    batman.displayFightingSkills();
    
}
