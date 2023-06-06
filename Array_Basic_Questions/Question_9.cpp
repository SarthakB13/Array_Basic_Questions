#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, max=INT_MIN, min=INT_MAX;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for (int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];

        if(arr[i] <min)
            min=arr[i];
    }
    cout<<"Range: "<<max-min;
    return 0;
}