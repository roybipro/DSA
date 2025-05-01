#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void Pair(){
    pair<int,int> p = {1,4};
    cout<<p.first<<" / "<<p.second<<endl;
    pair<int,pair<int,int>> p2={4,{5,6}};
    cout<<p2.first<<" / "<<p2.second.second<<" / "<<p2.second.first<<endl;
    pair<int,int> arr[]={{1,2},{2,3},{5,6}};
    cout<<arr[1].second;

}
int main()
{
    Pair();
    return 0;
}