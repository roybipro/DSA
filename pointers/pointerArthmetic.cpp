#include <iostream>
using namespace std;

int main() {
    // arr is a constant pointer
    int arr[]={1,2,3,4,5};

    cout<<arr<<endl; //arr (name of the array) point to the index 0 memory adress
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*arr+2<<endl;
    cout<<*arr+3<<endl; 
    return 0;
}