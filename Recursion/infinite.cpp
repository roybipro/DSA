#include <iostream>
using namespace std;

void infinite(int a){
    
    cout<<a;
    a++;
    infinite(a+1);
}
int main() {
    // Your code goes here
    infinite(1);
    return 0;
}