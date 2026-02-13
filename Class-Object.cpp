#include "Libraries.hpp"

// Definition of DisplayInfo
void StudentInformation::DisplayInfo() {
    int size = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < size; ++i) {
        cout << "Name: " << names[i] 
             << " Age: " << ages[i] << endl;
    }
}