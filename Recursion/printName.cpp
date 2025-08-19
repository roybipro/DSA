#include <iostream>
using namespace std;
void fun(int i,int n){
if(i>n)
return;
cout<<"Bipro"<<endl;
fun(i+1,n);
}
int main() {
    // Your code goes here
    int n;
    cin>>n;
fun(1,n);
    return 0;
}