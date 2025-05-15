#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a =5 ;
    cout<<(a<<1)<<endl;// << means left shift by b  that mean a*2^b
    cout<<(a>>1)<<endl; //>> mtlv right shift by b that mean a/2^b
    int b=8;
    cout<<(a|b)<<endl;// | this is exclusive or 'solution binary mae milega' 
    cout<<(a&b)<<endl;// &this is exclusive and 'solution binary mae milega' 


    return 0;
}
