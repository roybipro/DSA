#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 28, 4, 6, 12, 33, 23, 43, 45};
     int n= sizeof(arr)/sizeof(arr[0]);
     int x;
     cout<<"Enter target";
     cin>>x;
     for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<x<< " is present on index "<<i;
            break;
        }
        else 
        cout<<x<<" not present";
     }
    return 0;
}