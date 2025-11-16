#include <iostream>
using namespace std;
//hashing means prestoring and fetching
int main() {
    int n;
    cout << "Size of array :";
    cin >> n;
    int arr[n];
    cout<<"Enter the eliments :";
    for(int i =0;i<n;i++){
        cin>> arr[i];
    }

    //precompute
    int hash[100000] ={0}; //if it is on global then it will be initialized with 0 automatically
    for(int i=0;i<n;i++){
       hash[arr[i]]+= 1; 
    }

    int q;
    cout<<"Enter what you want to search :";
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;

    }
    return 0;
}