#include<bits/stdc++.h>
using namespace std;
void printbinary(int num){
    for(int i=10 ; i>=0 ; i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main(){
// binary of characters
for(char c='A' ; c<='Z' ; c++){
    cout<<c<<" ";
    printbinary(int(c)); // inki 6th bit unset hoti hae
}
cout<<endl;
for(char c='a' ; c<='z' ; c++){
    cout<<c<<" ";
    printbinary(int(c));// inki 6th bit set hoti hae 
}
cout<<endl;
cout<<char(1<<5);//this is the value of space mtlb 6th position iske sath or lenge to 5th bit set ho jaegi.
cout<<endl;
// cout<<char(~(1<<5));//this is the value of  a large number// iske sath and lenge to 5th bit unset hogi.
// but yaha pe ham "_" ko use kar skte hae usme 5th bit unset hoti hae
// FINAL CONCLUSION
char x='B';
char y='a';
cout<<char(x | ' ')<<endl; 
cout<<char(y & '_')<<endl; 

    return 0;
}