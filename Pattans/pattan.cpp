#include<iostream>
using namespace std;
void pattan1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattan2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattan3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(j+1)<<" ";
        }
        cout<<endl;
    }
}

void pattan4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}

void pattan5(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattan6(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
}

void pattan7(int n){
    for(int i=0;i<n;i++){
       //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //dont need to add space after * and go to next line
        //space
       //  for(int j=0;j<n-i-1;j++){
        //    cout<<" ";
       // }
        cout<<endl;
    }
}

void pattan8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j =0;j<(2*n-(2*i+1));j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattan9(int n){
    for(int i=0;i<n;i++){
       //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j =0;j<(2*n-(2*i+1));j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattan10(int n){
    for(int i=0;i<=(2*n-1);i++){
        int stars=i;
        if(i>n){
            stars =2*n-i;
        }
        for(int j =0;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattan11(int n){
  int start;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            start = 1;
        } else {
            start = 0;
        }
        
        for (int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;  // Toggle between 1 and 0
        }
        cout << endl;  // Move to the next line
    }
}

void pattan12(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
          //numbers
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
         }
         //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
         
         //numbers
        for (int j=i;j>=1;j--){
            cout<<j<<" ";
    }
    cout<<endl;
    space -=2;
    }
}

void pattan13(int n){
    int numb=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
     cout<<numb<<" ";
     numb++;
    }
    cout<<endl;
}
}

void pattan14(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";        
            }
                cout<<endl;
    }
}

void pattan15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<'A'+(n-i);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattan16(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }
}

void pattan17(int n){
    for(int i=0;i<n;i++){
        //sapce
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //characters
        char ch='A';
        int braeakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch<<" ";
            if(j<=braeakpoint){
                ch++;}
            else
            ch--;    

        }
        cout<<endl;
    }
}

void pattan18(int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char('A' + n - j - 1) << " ";
        }
        cout << endl;
    }
}
int main()
{    
    int n;
    cout<<"Enter Size :";
    cin>>n;
    pattan18(n);
    return 0;
}