#include <iostream>
#include <string>
using namespace std;

class StudentInformation {
private:
    string names[4] = {"John", "Mikashi", "Valery", "Sara"};
    int ages[4] = {18, 21, 23, 19};

public:
    void DisplayInfo() {
        int size = sizeof(names) / sizeof(names[0]);
        for (int i = 0; i < size; ++i) {
            cout << "Name: " << names[i]
                 << " Age: " << ages[i] << endl;
        }
    }
};

int main() {
    StudentInformation student;
    student.DisplayInfo();
    return 0;
}