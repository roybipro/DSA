#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    string s;
    cout << "Input string: ";
    cin >> s;

    //precompute
    int hash[26] = {0};
    for(int i =0; i <s.size(); i++){
        hash[s[i]-'a']++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;

        //fatching
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}
