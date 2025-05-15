#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter number:" << endl;
    cin >> num;

    if (num % 2 == 0 && num % 3 == 0) {
        cout << "The number is even and divisible by 3: " << num << endl;
    } else {
        cout << "The number is not even." << endl;
    }

    return 0;
}
