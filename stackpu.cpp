#include<bits/stdc++.h>
using namespace std;
class Stack { 
    queue<int> q1, q2; 
    int size; 
  
public: 
    Stack() 
    { 
        size = 0; 
    } 
  
    void pop() 
    { 
        if (q1.empty()) 
            return; 
  
        // Leave one element in q1 and 
        // push others in q2. 
        while (q1.size() != 1) { 
            q2.push(q1.front()); 
            q1.pop(); 
        } 
  
        // Pop the only left element 
        // from q1 
        q1.pop(); 
        size--; 
  
        // swap the names of two queues 
        queue<int> q = q1; 
        q1 = q2; 
        q2 = q; 
    } 
  
    void push(int x) 
    { 
        q1.push(x); 
        size++; 
    } 
  
    int top() 
    { 
        if (q1.empty()) 
            return -1; 
  
        while (q1.size() != 1) { 
            q2.push(q1.front()); 
            q1.pop(); 
        } 
  
        // last pushed element 
        int temp = q1.front(); 
  
        // to empty the auxiliary queue after 
        // last operation making pop more costly than push 
        q1.pop(); 
  
        // push last element to q2 
        q2.push(temp); 
  
        // swap the two queues
        queue<int> q = q1; 
        q1 = q2; 
        q2 = q; 
        return temp; 
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
    s.pop();
    return 0;
}