#ifndef STUDENTINFORMATION_H
#define STUDENTINFORMATION_H

#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

class StudentInformation {
private:
    string names[4] = {"John", "Mikashi", "Valery", "Sara"};
    int ages[4] = {18, 21, 23, 19};

public:
    void DisplayInfo();
};

#endif