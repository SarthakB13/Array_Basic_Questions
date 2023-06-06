#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,d,a=1;
    cout<<"Enter the Kth number to find:-";
    cin>>d;
    cout<<"Enter the size of an array:-";
    cin>>m;
    int arr[m];
    for (int i=0; i<m; i++)
    {
        cout<<"Enter" <<a<< "number:-"; 
        cin>>arr[i];
    } 
    int n=sizeof(arr)/sizeof(arr[0]); 
    sort(arr, arr+n);
    cout<<"Largest:- "<<arr[m-d]<<endl;
    cout<<"Smallest:- "<<arr[d-1]; return 0;
}