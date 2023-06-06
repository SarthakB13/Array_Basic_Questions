#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    for (int i=0; i<10; i++)
    {
        cout<<"Enter number for position "<<i+1<<":"<<endl;
        cin>>arr[i];
    }
        
    for (int i=0; i<10; i++)
    {
        cout<<(arr[i]);
    }        
}