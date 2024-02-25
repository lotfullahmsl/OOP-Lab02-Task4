#ifndef FLOWER_H
#define FLOWER_H

#include <iostream>

using namespace std;

class Flower {
private:
    double height;
    double growthRate;

public:
    Flower(double initialHeight) : height(initialHeight), growthRate(0.5) {}
    void simulateDayOfGrowth() {
        height += growthRate;
    }
    void displayHeight() const {
        cout << "\tFlower height: " << height << " cm" << endl;
    }
};

#endif
