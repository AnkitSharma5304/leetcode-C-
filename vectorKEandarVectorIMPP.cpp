#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int numCustomers, numAccounts;
    cout << "Enter the number of customers and accounts: ";
    cin >> numCustomers >> numAccounts;

    vector<vector<int>> arr(numCustomers, vector<int>(numAccounts)); // Initialize a 2D vector with the given sizes

    cout << "Enter the account balances:\n";
    for(int i = 0; i < numCustomers; i++){
        for(int j = 0; j < numAccounts; j++){
            cin >> arr[i][j]; // Read the input directly into the correct position
        }
    }

    // Optional: Display the 2D vector to verify the input
    cout << "Account balances are:\n";
    for(int i = 0; i < numCustomers; i++){
        for(int j = 0; j < numAccounts; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
