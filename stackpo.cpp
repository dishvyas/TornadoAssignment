#include<bits/stdc++.h>
using namespace std;
class Stack { 
    queue<int> q1, q2; 
  
    // current size of stack 
    int size; 
  
public: 
    Stack() 
    { 
        size = 0; 
    } 
  
    void push(int x) 
    { 
        size+=1; 
  
        // Push x first in empty q2 
        q2.push(x); 
  
        // Push all the remaining 
        // elements in q1 to q2 making push costly 
        while (!q1.empty()) 
        { 
            q2.push(q1.front()); 
            q1.pop(); 
        } 
  
        // swap the two queues 
        queue<int> q = q1; 
        q1 = q2; 
        q2 = q; 
    } 
  
    void pop() 
    { 
  
        // if q1 is empty 
        if (q1.empty()) 
            return; 
        q1.pop(); 
        size--; 
    } 
  
    int top() 
    { 
         // if q1 is empty 
        if (q1.empty()) 
            return -1; 
        return q1.front(); 
    } 
  
    int Size() 
    { 
        return size; 
    } 
}; 

int main()
{
    Stack s;
    int n,a,i;
    cin>>n;     //number of elements for input
    for(i=0;i<n;i++)
    {
        cin>>a;
        s.push(a);
    }
    cout<<"Size of Stack :"<<s.Size()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}