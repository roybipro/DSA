#include <iostream>
using namespace std;

void f(int i,int sum){
    if(i<1){
        cout<<"Sum"<<sum;
        return;
    }
  f(i-1,sum+i);
}
int main() {
    // Your code goes here
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    f(n,0);
    return 0;
}
