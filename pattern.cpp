#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;                 //Max number of stars
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(i=n-1;i>0;i--)
    {
        for(j=i;j>0;j--)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}