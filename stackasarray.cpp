#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
class stacks{
    private:
    int top=-1;
    int size;
    int arr[MAX];
    public:
   
    bool push(int x)
    {
        if(top>=(MAX-1))
        {
            cout<<"overflow"<<endl;
            return false;
        }
        else{
            arr[++top]=x;
            cout<<"pushed"<<endl;
            return true;
        }
    }
    int pop()
    {
        if(top<0)
        {
            cout<<"underflow"<<endl;
            return 0;
        }
        else{
            int x=arr[top--];
            return x;
        }
    }
    int peek()
    {
        if(top<0)
        {
            cout<<"overflow"<<endl;
            return 0;
        }
        else{
            return arr[top];
        }
    }
    bool isfull()
    {
        if(top>=(MAX-1))
        {
            return true;
        }
        return false;
    }
    bool isempty()
    {
        if(top<0){
            return true;
        }
        return false;
    }

};
int main()
{
  class stacks s;
  s.push(30);
  s.push(90);
  s.push(120);
  s.pop();
  s.peek();
  s.pop();
  s.pop();
  s.isempty();
  s.isfull();
  return 0;

}