#include<iostream>
using namespace std;

void f(int i,int n){
if(i>n)
return;
cout<<"Bipro"<<endl;
f(i+1,n);
}
int main()
{
    int n=5;
    //cin>>n;
    f(1,n);
    
    return 0;
}