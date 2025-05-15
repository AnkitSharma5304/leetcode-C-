#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
        
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing array
     for (int i = 0; i < n; i++)
        
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //traspose of the matrix
    for (int i = 0; i < n-1; i++)//we can keep n instead
        
    {
        for (int j = i+1; j < n; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        
    }
    //printing transpose of the matrix
    cout<<endl<<endl;
    for (int i = 0; i < n; i++)
        
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
