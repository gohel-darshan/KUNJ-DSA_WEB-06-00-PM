#include <iostream>
#include <string>

using namespace std;

class Gadget {
private:
    string name;
    int powerLevel;
    int useCount;

    void updateUseCount() {
        useCount++;
        if (useCount > 10) 
        {
            cout << "Warning: Gadget '" << name << "' has been overused!" << endl;
        }
    }

public:
    
    Gadget(string gadgetName, int power)
        : name(gadgetName), powerLevel(power), useCount(0) {}

    void displayDetails() {
        cout << "Gadget Name: " << name << endl;
        cout << "Power Level: " << powerLevel << endl;
        cout << "Use Count: " << useCount << endl;
    }
    
    void useGadget() {
        updateUseCount();
    }

    string getName() {
        return name;
    }

    int getPowerLevel() {
        return powerLevel;
    }
};

int main() {
    Gadget gadget1("Time Machine", 100);
    
    for (int i = 0; i < 12; i++) {
        gadget1.useGadget();
    }

    gadget1.displayDetails();

}
