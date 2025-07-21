#include <iostream>
using namespace std;

int cnt = 0; // Global variable

void infinite() {
    if (cnt == 4) {
        return; // Base case to stop recursion
    }
    cout << cnt << " ";
    cnt++;
    infinite(); // Recursive call
}

int main() {
    infinite(); // Function call starts recursion
    return 0;
}