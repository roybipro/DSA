#include <iostream>
using namespace std;

void f(int i,int sum){
    if(i<1){
        cout<<"Sum"<<sum;
        return;
    }
  f(i-1,sum+i);
}
//Functional Recursion
int f2(int n){
    if(n==0){
    return 0;}
    return n + f2(n-1);

}
int main() {
    // Your code goes here
    int n;
    cout<<"Enter the Number :";
    cin>>n;
   cout<<f2(n);
    return 0;
}
