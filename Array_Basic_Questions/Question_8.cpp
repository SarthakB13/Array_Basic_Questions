#include <iostream> 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    int count[3]={0}; 
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        count[arr[i]]++;
    }
    int k=0;
    for (int i=0;i<3;i++) 
        for (int j=0; j<count[i];j++) 
            arr[k++]=i;

    for (int i=0;i<n;i++) 
        cout<<arr[i]<<" ";

return 0;
}