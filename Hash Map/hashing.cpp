#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //pre compute the hash values
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    //search the key
    while(key--){
        int number;
        cout << "Enter a number to check its frequency: ";
        cin >> number;
        //fetch
        cout << "Frequency of " << number << " is: " << hash[number] << endl;
    }
    
    return 0;
}