#include <iostream>
using namespace std;
void changeA(int &b){ //pass by reference using alias 
    b =25;
}
int main() {
    
    int a =1;

    changeA(a);

    cout<<"Inside main fnx :"<<a<<endl;//20
    return 0;
}