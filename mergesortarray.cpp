#include<bits/stdc++.h>
using namespace std;
void mergedSortArray(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
    int i,j;
    for(i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];                    // 0 to n1 elements of arr1
    }
    i=0;
    for(j=n1;j<n1+n2;j++)
    {
        arr3[j]=arr2[i];                    // n1 to n1+n2 elements of arr2
        i++;
    }
}
int main()
{
     int n1,n2,i,j;
    //Enter size of arrays arr1 and arr2
    cin>>n1>>n2;

    int arr1[n1],arr2[n2];
    //Enter elements for arr1 and arr2 
    for(i=0;i<n1;i++)
        cin>>arr1[i];
    for(i=0;i<n2;i++)
        cin>>arr2[i];

    int arr3[n1+n2];
    mergedSortArray(arr1,arr2,arr3,n1,n2);
    sort(arr3,arr3+n1+n2);                  //sort final arr after concatenating them
    for(i=0;i<n1+n2;i++)
        cout<<arr3[i]<<" ";
    cout<<endl;
    return 0;
}