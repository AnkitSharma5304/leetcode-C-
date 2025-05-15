// If x is 0, return 0.
// Initialize first to 1 and last to x.
// While first is less than or equal to last, do the following:
// a. Compute mid as first + (last - first) / 2.
// b. If mid * mid equals x, return mid.
// c. If mid * mid is greater than x, update last to mid - 1.
// d. If mid * mid is less than x, update first to mid + 1.
// Return last.
#include<iostream>//NOTE this will create
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"enter x"<<endl;
    int x;
    cin>>x;

    return 0;
}
