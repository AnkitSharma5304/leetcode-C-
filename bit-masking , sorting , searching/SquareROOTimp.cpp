#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x;
    // square root find krni hae 
    cout<<"enter the value of x"<<endl;

    cin>>x;
    int low=0;
    int high=x;
    while(low<=high){
        long long mid=high+low/2;
        if(mid*mid==x){
            high=mid;
            break;
        }
        else if (mid*mid>x){
            high=mid-1;// right true left assigns
        }
        else{
           low=mid+1;
        }


    }
   cout<<"the square root is: " <<high<<endl;
    
    return 0;
}
