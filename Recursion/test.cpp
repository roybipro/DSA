#include <iostream>
using namespace std;

int myCount = 0;

void numb() {
    if (myCount == 3)
        return;
    cout << myCount << endl;
    myCount++;
    numb();
}

int main() {
    numb();
    return 0;
}