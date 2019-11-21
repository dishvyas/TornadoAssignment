#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    string s;
    char c;
    s=to_string(n);                 //convert to string
    list<int> l;
    list<int>::iterator it = l.begin();
    for(i=0;i<s.length();i++)
    {
        c=s[i];                         
        // cout<<c<<endl;
        j=(int)c - 48;              //convert character to int to add list
        // cout<<j<<endl;
        l.insert(it,j); 
        // it++;
    }
    // l.sort();
    for(list<int>::iterator k=l.begin();k!=l.end();k++)
        cout<<*k<<" ";              //print list
    cout<<endl;
    return 0;
}