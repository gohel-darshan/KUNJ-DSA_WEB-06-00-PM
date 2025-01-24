#include <iostream>

using namespace std;

class Superhero {
public:
    void fly() {
        cout << "Flying high!" << endl;
    }

    void saveTheWorld() {
        cout << "Saving the world!" << endl;
    }
};

class Ironman : public Superhero {
public:
    void shootLasers() {
        cout << "Shooting lasers!" << endl;
    }

    void demonstrate() {
        fly();
        saveTheWorld();
        shootLasers();
    }
};

int main() {
    Ironman ironman;
    ironman.demonstrate();
}
