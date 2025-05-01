#include<iostream>
using namespace std;
const int Max_stack=5;
int x;
int stack[Max_stack];
int top=-1;
void push(){
    if(top==Max_stack-1){
        cout<<"Stack is Overflow";
    }
    else{
        cin>>x;
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        cout<<"Stack is Underflow";
    }
    else{
     cout<<stack[top];
     top--;
    }
}
int main()
{
    push();
    pop();
    return 0;
}