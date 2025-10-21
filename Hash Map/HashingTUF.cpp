#include <iostream>
using namespace std;
//hashing means prestoring and fetching
int main() {
    // Your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    int hash[13]={0};
    for(int i;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }
    return 0;
}