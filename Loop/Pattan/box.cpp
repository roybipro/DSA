#include<iostream>
using namespace std;

void pattern1(int n){
    // cout<<"Enter the shape size : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
       cout<<endl;
    }
}
int main()
{
 int n;
      cout<<"Enter the shape size : ";
 cin>>n;   
 pattern1(n);
    return 0;
}