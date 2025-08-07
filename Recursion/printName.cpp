#include <iostream>
using namespace std;
 
void f(int i,int n){
    if(i>n){
        return;
    }
        cout<<"Bipro"<<endl;
        f(i+1,n);
    
}
int main() {
   int n;
   cin>>n;
   f(1,n);
   f(1,n);
   cout<<"Bipro"<<endl;
   cout<<"Bipro"<<endl;
   cout<<"Bipro"<<endl;
   cout<<"Bipro"<<endl;
    
    return 0;
}