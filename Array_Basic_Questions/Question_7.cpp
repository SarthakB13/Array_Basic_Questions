#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,d,a=1; 
    int count=0;
    cout<<"Enter the number to find:- ";
    cin>>d;
    cout<<"Enter the size of an array:-";
    cin>>m;
    int arr[m];
    for(int i=0; i<m; i++)
    {
        cout<<"Enter "<<a<<" number:-";
        cin>>arr[i];
        a++;
    } 
    for(int j=0; j<m;j++)
    {
        if(arr[j]==d)
            count++;
        else
            continue;
    }
    cout<<count; 
    return 0;
}