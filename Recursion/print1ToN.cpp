#include <iostream>
using namespace std;
  void f(int i,int n){
    if (i>n){
        return;
    }
    cout<<i<<endl;
    f(i+1,n);
  }
//Revarse order
  void fRevarse(int i,int n){
    if (i<1){
        return;
    }
    cout<<i<<endl;
    fRevarse(i-1,n);
  }
  //Backtracking 
  void fBacktrack(int i,int n){
    if (i<1){
        return;
    }
    fBacktrack(i-1,n);
    cout<<i<<endl; 
  }
 //Backtracking Revarse order
 void fReBacktracking(int i,int n){
    if (i>n){
        return;
    }
    
    fReBacktracking(i+1,n);
    cout<<i<<endl;
  } 
  int main() {
   int n;
   cin>>n;
   fReBacktracking(1,n); 
    return 0;
}