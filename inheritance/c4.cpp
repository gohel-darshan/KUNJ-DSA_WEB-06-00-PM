#include <iostream>
using namespace std;

class Superhero {
public:
    void displayBasicPowers() {
        cout << "Basic Superhero Powers: Super strength, agility." << endl;
    }
};

class Superman : public Superhero {
public:
    void displayUniqueAbility() {
        cout << "Superman Ability: Flight." << endl;
    }
};

class Ironman : public Superhero {
public:
    void displayUniqueAbility() {
        cout << "Ironman Ability: High-tech suit." << endl;
    }
};

class Batman : public Superhero {
public:
    void displayUniqueAbility() {
        cout << "Batman Ability: Genius-level intellect." << endl;
    }
};

int main() {
    Superman superman;
    Ironman ironman;
    Batman batman;

    cout << "Superman:" << endl;
    superman.displayBasicPowers();
    superman.displayUniqueAbility();

    cout << "Ironman:" << endl;
    ironman.displayBasicPowers();
    ironman.displayUniqueAbility();

    cout << "Batman:" << endl;
    batman.displayBasicPowers();
    batman.displayUniqueAbility();

}
