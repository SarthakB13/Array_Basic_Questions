#include <iostream> 
using namespace std;

int main()
{
    int a=1;
    int n;
    int m;
    int j;
    cin>>n;
    cin>>m;
    int arr[m];
    for(int i=0; i<m; i++)
    {
        arr[i]=a;
        a++;
    }
    for(j=0; j<=m; j++)
    { 
        if(arr[j]==n)
        {
            cout<<"True";
            break;
        }
        else if(j==m)
        {
            cout<<"False";
            break;
        }
    }
    return 0;
}