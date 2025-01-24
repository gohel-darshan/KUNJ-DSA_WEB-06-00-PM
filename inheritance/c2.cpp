#include <iostream>

using namespace std;

class FlyingHero {
public:
    void fly() {
        cout << "Flying high!" << endl;
    }
};

class FightingHero {
public:
    void fight() {
        cout << "Fighting the enemy!" << endl;
    }
};

class Ironman : public FlyingHero, public FightingHero {
public:
    void shootLasers() {
        cout << "Shooting lasers!" << endl;
    }

    void demonstrate() {
        fly();
        shootLasers();
        fight();
    }
};

class Superman : public FlyingHero, public FightingHero {
public:
    void useHeatVision() {
        cout << "Using heat vision!" << endl;
    }

    void demonstrate() {
        fly();
        useHeatVision();
        fight();
    }
};

int main() {
    Ironman ironman;
    Superman superman;

    cout << "Ironman:";
    ironman.demonstrate();

    cout << "Superman:";
    superman.demonstrate();
}
