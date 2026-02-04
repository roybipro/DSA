#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Your code goes here
    // vector<int> vec = {1,2,3};//3
    // cout << vec[0]<<endl;
    vector<char> vec ={'a','b','c','d','e'};

    cout<<"Size = "<<vec.size()<<endl; //size function

    for(char val : vec){
        cout << val <<endl;
    }

    vec.pop_back(); //pop function

    vec.push_back('f'); //pushback function
    cout<<"After pushback Size = "<<vec.size()<<endl; //size function
    for(char val : vec){
        cout << val <<endl;
    } 

    cout<<"front value :"<<vec.front()<<endl; //front function
    cout<<"back value :"<<vec.back()<<endl;  //back function
    cout<<"index value :"<<vec.at(3)<<endl; //at function
    return 0;
}