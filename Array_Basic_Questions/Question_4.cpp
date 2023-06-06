#include <iostream>
using namespace std;

int main()
{
    int m,j,a=1;
    int max=0;
    cin>>m;
    int arr[m];
    for (int i=0; i<m; i++)
    {
        cout<<"Enter "<<a<<" number:-";
        cin>>arr[i];
        a++;
    } 
    int temp;
    for(int j=0; j<m/2; j++)
    {
        temp= arr[j];
        arr[j]=arr[m-1-j]; arr[m-1-j]=temp;
    }
    for(int h=0; h<m; h++)
        cout<<arr[h]; 
    
    return 0;
}