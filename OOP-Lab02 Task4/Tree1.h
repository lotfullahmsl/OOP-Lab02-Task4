#ifndef TREE_H
#define TREE_H

#include <iostream>

using namespace std;

class Tree {
private:
    double height;
    double growthRate;

public:
    Tree(double initialHeight) : height(initialHeight), growthRate(0.2) {}
    void simulateDayOfGrowth() {
        height += growthRate;
    }
    void displayHeight() const {
        cout << "\tTree height: " << height << " cm" << endl;
    }
};

#endif
