#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int n;
   cin >> n;
    int x = n % 2;
    if (x == 0) {
        cout<<n << " is even" << endl;
    } else {
        cout<< n << " is odd" << endl;
    }
    return 0;
}