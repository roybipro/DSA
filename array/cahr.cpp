#include<iostream>
using namespace std;

int main()
{
    char arr[4]={'a','b','c'};
    for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){
    cout<<arr[i];}
    return 0;
}