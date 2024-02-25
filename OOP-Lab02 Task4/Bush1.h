#ifndef BUSH_H
#define BUSH_H

#include <iostream>

using namespace std;

class Bush {
private:
    double height;
    double growthRate;

public:
    Bush(double initialHeight) : height(initialHeight), growthRate(0.7) {}
    void simulateDayOfGrowth() {
        height += growthRate;
    }
    void displayHeight() const {
        cout << "\tBush height: " << height << " cm" << endl;
    }
};

#endif