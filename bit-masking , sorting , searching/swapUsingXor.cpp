#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=4;
    int b=6;
    a=a^b;
    b=b^a;// b k ander a store ho gya
    //x xor y xor z = x xor z xor y = y xor x xor z
    a=a^b;//a^a^b---->b
    cout<<"a is:"<<a;
    cout<<endl;
    cout<<"b is:"<<b;
    return 0;
}